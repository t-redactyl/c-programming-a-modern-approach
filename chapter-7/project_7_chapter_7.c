//
// Created by Jodie Burchell on 08.01.26.
//
#include <stdio.h>

int main() {
    int num1, denom1, num2, denom2, resultNum, resultDenom,
    a, b, r, gcd, simplified_numerator, simplified_denominator;;
    char operation;

    // User input
    printf("This program does arithmetic operations between two fractions (addition, subtraction, multiplication or division).\n");
    printf("Enter two fractions and the desired operation (e.g., 1/2 * 3/4): ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &operation, &num2, &denom2);

    // Perform fraction operation
    if (operation == 43) {
        resultNum = num1 * denom2 + num2 * denom1;
        resultDenom = denom1 * denom2;
    }
    else if (operation == 45) {
        resultNum = num1 * denom2 - num2 * denom1;
        resultDenom = denom1 * denom2;
    }
    else if (operation == 42) {
        resultNum = num1 * num2;
        resultDenom = denom1 * denom2;
    }
    else if (operation == 47) {
        resultNum = num1 * denom2;
        resultDenom = num2 * denom1;
    }
    else {
        printf("Invalid operation");
        return 1;
    }

    // Calculate GCD
    if (resultNum > resultDenom) {
        a = resultNum;
        b = resultDenom;
    }
    else {
        a = resultDenom;
        b = resultNum;
    }

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    // Simplifying fraction
    gcd = a;
    simplified_numerator = resultNum / gcd;
    simplified_denominator = resultDenom / gcd;

    printf("The result is %d/%d (simplifies to %d/%d).", resultNum, resultDenom, simplified_numerator, simplified_denominator);

    return 0;
}