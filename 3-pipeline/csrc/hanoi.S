.text
    .align 2
    .extern print_hanoi_move
    .globl qz2_A_main

# -----------------------------------------------------------
# Register Mapping:
# s0 = i (current step number)
# s1 = disk_num (0 = smallest disk)
# s2 = from_peg (0, 1, 2)
# s3 = to_peg (0, 1, 2)
# s4 = obdata_base address
# s5 = pos[0] (Location of disk 0)
# s6 = pos[1] (Location of disk 1)
# s7 = pos[2] (Location of disk 2)
# s8 = from_char (decoded 'A'/'B'/'C')
# s9 = to_char (decoded 'A'/'B'/'C')
# -----------------------------------------------------------

qz2_A_main:
    # --- Function Prologue ---
    addi    sp, sp, -64
    sw      ra, 60(sp)
    sw      s0, 56(sp)
    sw      s1, 52(sp)
    sw      s2, 48(sp)
    sw      s3, 44(sp)
    sw      s4, 40(sp)
    sw      s5, 36(sp)
    sw      s6, 32(sp)
    sw      s7, 28(sp)
    sw      s8, 24(sp)
    sw      s9, 20(sp)

    # Initialize pos[]: All disks start at peg 0
    mv      s5, x0          # pos[0] = 0
    mv      s6, x0          # pos[1] = 0
    mv      s7, x0          # pos[2] = 0

    # Initialize step counter i = 1
    li      s0, 1

    # Load obfuscated data base address once
    la      s4, obdata

game_loop:
    # --- 1. Determine which disk to move (Gray Code Logic) ---
    li      x5, 8           # Total steps for 3 disks (2^3)
    beq     s0, x5, finish_game

    # Calculate Gray Code changes to find disk index (Ruler function)
    srli    x5, s0, 1
    xor     x6, s0, x5      # G(i)
    addi    x7, s0, -1
    srli    x28, x7, 1
    xor     x7, x7, x28     # G(i-1)
    xor     x5, x6, x7      # Difference indicates bit change

    # Decode bit change to disk index (s1)
    li      s1, 0           # Default disk 0
    andi    x6, x5, 1
    bne     x6, x0, disk_found
    li      s1, 1           # Disk 1
    andi    x6, x5, 2
    bne     x6, x0, disk_found
    li      s1, 2           # Disk 2

disk_found:
    # (Optional: Debug/Sanity check removal - original code had checks for x30/x31 here)

    # --- 2. Get Source Peg (s2 = pos[disk]) ---
    beq     s1, x0, get_pos0
    li      x5, 1
    beq     s1, x5, get_pos1
    mv      s2, s7          # Disk 2 source
    j       calc_dest
get_pos0:
    mv      s2, s5          # Disk 0 source
    j       calc_dest
get_pos1:
    mv      s2, s6          # Disk 1 source

calc_dest:
    # --- 3. Calculate Destination Peg (s3) ---
    bne     s1, x0, handle_large

    # Case: Moving Smallest Disk (Disk 0)
    # Strategy: Move cyclical (peg + 2) % 3  => Equivalent to (peg - 1) % 3
    addi    s3, s2, 2
    li      x6, 3
    blt     s3, x6, display_move
    sub     s3, s3, x6      # Modulo 3
    j       display_move

handle_large:
    # Case: Moving Larger Disk
    # Strategy: Move to the peg NOT occupied by the smallest disk (pos[0])
    # Target = 3 - Source_Peg - Smallest_Disk_Peg
    li      x19, 3
    sub     s3, x19, s2     # 3 - source
    sub     s3, s3, s5      # (3 - source) - pos[0]
    # Note: Result is guaranteed to be 0, 1, or 2. No modulo needed.

display_move:
    # --- 4. Decode Characters & Print ---
    # Decryption: char = (byte ^ 0x6F) - 0x12
    li      x6, 0x6F

    # Decode FROM char
    add     x5, s4, s2      # Address = obdata + from_peg
    lbu     s8, 0(x5)
    xor     s8, s8, x6
    addi    s8, s8, -0x12

    # Decode TO char
    add     x7, s4, s3      # Address = obdata + to_peg
    lbu     s9, 0(x7)
    xor     s9, s9, x6
    addi    s9, s9, -0x12

    # Call external C function: print_hanoi_move(disk+1, from_char, to_char)
    addi    a0, s1, 1       # Arg 1: Disk num (1-based)
    mv      a1, s8          # Arg 2: From char
    mv      a2, s9          # Arg 3: To char
    jal     ra, print_hanoi_move

    # --- 5. Update Position (pos[disk] = to_peg) ---
    beq     s1, x0, set_pos0
    li      x5, 1
    beq     s1, x5, set_pos1
    mv      s7, s3          # Update pos[2]
    j       next_step
set_pos0:
    mv      s5, s3          # Update pos[0]
    j       next_step
set_pos1:
    mv      s6, s3          # Update pos[1]

next_step:
    addi    s0, s0, 1       # i++
    j       game_loop

finish_game:
    # --- Function Epilogue ---
    lw      ra, 60(sp)
    lw      s0, 56(sp)
    lw      s1, 52(sp)
    lw      s2, 48(sp)
    lw      s3, 44(sp)
    lw      s4, 40(sp)
    lw      s5, 36(sp)
    lw      s6, 32(sp)
    lw      s7, 28(sp)
    lw      s8, 24(sp)
    lw      s9, 20(sp)
    addi    sp, sp, 64
    ret

    .data
obdata:
    .byte   0x3c, 0x3b, 0x3a  # Encoded 'A', 'B', 'C'