//
// Created by Jodie Burchell on 04.01.26.
//
#include <stdio.h>

int main() {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        i++;
    }
    return 0;
}