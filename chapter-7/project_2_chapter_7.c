//
// Created by Jodie Burchell on 08.01.26.
//
#include <stdio.h>

int main() {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++) {
        if (i % 24 == 0) {
            printf("Press Enter to continue ...");
            while (getchar() != '\n');
        }
        printf("%10d%10d\n", i, i * i);
    }
    return 0;
}