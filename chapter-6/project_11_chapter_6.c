//
// Created by Jodie Burchell on 06.01.26.
//
#include <stdio.h>

int main() {
    int n;
    float e = 1.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // for (int j = 1; j <= n; j++) {
    //     fact *= j;
    // }
    // printf("The factorial of %d is %d", n, fact);

    for (int i = 1; i <= n; i++) {
        int fact = 1;

        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        e += 1.0/fact;
    }
    printf("e = %f", e);

    return 0;
}