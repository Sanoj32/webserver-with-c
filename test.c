#include <stdio.h>
#include <stdint.h>

int main(void) {
    long long y = 0x1122334455667788LL; // 8-byte value
    printf("y as long long: %lld (0x%llx)\n", y, y);

    // Interpret y with different pointer types
    int *pi = (int*)&y;
    char *pc = (char*)&y;
    double *pd = (double*)&y;

    printf("y via int*   (*pi) = %d (0x%x)\n", *pi, *pi);
    printf("y via char*  (*pc) = %d (0x%x)\n", *pc, *pc);
    printf("y via double (*pd) = %f\n", *pd);

    // Print raw bytes to see what’s really in memory
    printf("Raw bytes of y in memory:\n");
    for (int i = 0; i < sizeof(y); i++) {
        printf("  byte[%d] = 0x%02x\n", i, (unsigned char)pc[i]);
    }

    return 0;
}
