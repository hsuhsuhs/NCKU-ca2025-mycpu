
CROSS_COMPILE = riscv64-unknown-elf-

ASFLAGS = -march=rv32i_zicsr -mabi=ilp32
CFLAGS = -O0 -Wall -march=rv32i_zicsr -mabi=ilp32
LDFLAGS = --oformat=elf32-littleriscv

AS := $(CROSS_COMPILE)as
CC := $(CROSS_COMPILE)gcc
LD := $(CROSS_COMPILE)ld
OBJCOPY := $(CROSS_COMPILE)objcopy

# [New Rule] Compile C to Object file
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Existing Rule: Compile Assembly to Object file
%.o: %.S
	$(AS) -R $(ASFLAGS) -o $@ $<

# Existing Rule: Link Pure Assembly
%.elf: %.S
	$(AS) -R $(ASFLAGS) -o $(@:.elf=.o) $<
	$(CROSS_COMPILE)ld -o $@ -T link.lds $(LDFLAGS) $(@:.elf=.o)

# Existing Rule: Link Pure C (with init.o)
%.elf: %.c init.o
	$(CC) $(CFLAGS) -c -o $(@:.elf=.o) $<
	$(CROSS_COMPILE)ld -o $@ -T link.lds $(LDFLAGS) $(@:.elf=.o) init.o

# [New Target] Specific rule for Hanoi (C + Assembly)
hanoi.elf: main.o hanoi.o
	$(LD) -o $@ -T link.lds $(LDFLAGS) main.o hanoi.o

# Convert ELF to Binary
%.asmbin: %.elf
	$(OBJCOPY) -O binary -j .text -j .data $< $@

BINS = \
	fibonacci.asmbin \
	hazard.asmbin \
	quicksort.asmbin \
	sb.asmbin \
	uart.asmbin \
	irqtrap.asmbin \
	hanoi.asmbin  

# Clear the .DEFAULT_GOAL special variable
.DEFAULT_GOAL :=

all: $(BINS)

update: $(BINS)
	cp -f $(BINS) ../src/main/resources

clean:
	$(RM) *.o *.elf *.asmbin
