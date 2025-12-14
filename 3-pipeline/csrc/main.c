// main.c
extern void qz2_A_main(); 

// An empty print function fools the linker.
void print_hanoi_move(int disk, int from, int to) {}

void _start() {
    qz2_A_main();
    while(1); // 
}