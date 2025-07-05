//
// Created by Jodie Burchell on 05.07.25.
//
# include <stdio.h>

int main() {
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    float tax = amount * 0.05;
    printf("With tax added: %.2f", amount + tax);

    return 0;
}