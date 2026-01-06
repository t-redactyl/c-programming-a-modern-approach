//
// Created by Jodie Burchell on 06.01.26.
//
#include <stdio.h>

int main() {
    int increment = 1, fact = 1;
    float error, new_term, e = 1.0;

    printf("Enter an error term (ε): ");
    scanf("%f", &error);

    do {
        fact *= increment;
        new_term = 1.0/fact;
        e += new_term;
        increment++;
    } while (new_term >= error);

    printf("e = %f", e);

    return 0;
}