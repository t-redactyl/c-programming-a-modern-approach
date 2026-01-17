//
// Created by Jodie Burchell on 12.01.26.
//
#include <stdio.h>

int main() {
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Repeated digit(s):");
    for (digit = 0; digit < 10; digit++) {
        if (digit_seen[digit] > 1) {
            printf(" %d", digit);
        }
    }

    return 0;
}