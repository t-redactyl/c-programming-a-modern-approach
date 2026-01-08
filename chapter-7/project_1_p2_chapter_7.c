//
// Created by Jodie Burchell on 08.01.26.
//
#include <stdio.h>

int main() {
    int i;
    long lowest_number, highest_number;

    printf("This program calculates the square of a range of numbers.\n");
    printf("Enter the lowest number: ");
    scanf("%ld", &lowest_number);
    printf("Enter the highest number: ");
    scanf("%ld", &highest_number);

    for (i = lowest_number; i <= highest_number; i++) {
        printf("%10ld%20ld\n", i, i * i);
    }
    return 0;
}