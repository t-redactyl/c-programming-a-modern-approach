//
// Created by Jodie Burchell on 04.01.26.
//
#include <stdio.h>

int main() {
    int number_grade, first_digits;

    printf("Enter the numerical grade: ");
    scanf("%d", &number_grade);

    if (number_grade < 0 || number_grade > 100) {
        printf("Error: grade out of bounds\n");
        return 1;
    }

    first_digits = number_grade / 10;

    printf("Letter grade: ");
    switch (first_digits) {
        case 10: case 9:
            printf("A"); break;
        case 8:
            printf("B"); break;
        case 7:
            printf("C"); break;
        case 6:
            printf("D"); break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("F"); break;
    }

    return 0;
}