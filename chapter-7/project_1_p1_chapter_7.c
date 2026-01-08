//
// Created by Jodie Burchell on 08.01.26.
//

#include <stdio.h>

int main() {
    int n;
    // int i;
    short i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // printf("%10d%15d\n", i, i * i);
        printf("%10hd%15hd\n", i, i * i);
    }
    return 0;
}

// Integer overflow occurs for `int` at the square of 46340, indicating that it's ≈ log_2(2147395600) ≈ 32 bits
// For `short` it occurs at the square of 181, indicating that it's ≈ log_2(32761) ≈ 16 bits
// For `long` it occurs