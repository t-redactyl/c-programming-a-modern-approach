//
// Created by Jodie Burchell on 05.01.26.
//
#include <stdio.h>

int main() {

    int numerator, denominator, a, b, r, gcd,
    simplified_numerator, simplified_denominator;

    printf("Enter two integers: ");
    scanf("%d/%d", &numerator, &denominator);

    if (numerator > denominator) {
        a = numerator;
        b = denominator;
    }
    else {
        a = denominator;
        b = numerator;
    }

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    gcd = a;
    simplified_numerator = numerator / gcd;
    simplified_denominator = denominator / gcd;

    printf("In lowest terms: %d/%d\n", simplified_numerator, simplified_denominator);

    return 0;
}