//
// Created by Jodie Burchell on 09.01.26.
//
#include <stdio.h>

int main() {
    long double factorial = 1;
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d: %Lf", n, factorial);

    return 0;
}