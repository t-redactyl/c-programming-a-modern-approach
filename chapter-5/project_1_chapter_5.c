//
// Created by Jodie Burchell on 13.11.25.
//

# include <stdio.h>

int main() {
    int number;
    int length;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 & number <= 9)
        length = 1;
    else if (number >= 10 & number <= 99)
        length = 2;
    else if (number >= 100 & number <= 999)
        length = 3;
    else if (number >= 1000 & number <= 9999)
        length = 4;
    else
        length = 0;

    printf("The number %d has %d ", number, length);
    switch (length) {
        case 1: printf("digit."); break;
        default: printf("digits."); break;
    }

    return 0;

}