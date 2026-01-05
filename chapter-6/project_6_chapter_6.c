//
// Created by Jodie Burchell on 05.01.26.
//
#include <stdio.h>

int main() {
    int n, square, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        square = i * i;
        if (i % 2 == 0) {
            printf("%10d%10d\n", i, square);
        }
        i++;
    } while (square <= n);

    return 0;
}