#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    return (n & 0x01) ? printf("Impar!\n") : printf("Par!\n");
//    return (n << 31) ? printf("Impar!\n") : printf("Par!\n");
}
