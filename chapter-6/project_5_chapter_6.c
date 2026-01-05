//
// Created by Jodie Burchell on 05.01.26.
//
#include <stdio.h>

int main() {
    int digit, interim_digit;

    printf("Enter a number: ");
    scanf("%d", &digit);

    interim_digit = digit;

    do {
        printf("%d", interim_digit % 10);
        interim_digit = interim_digit / 10;
    } while (interim_digit > 0);

    return 0;
}