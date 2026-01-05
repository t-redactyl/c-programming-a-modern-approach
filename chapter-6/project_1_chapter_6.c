//
// Created by Jodie Burchell on 05.01.26.
//
#include <stdio.h>

int main() {
    float largest_number = 0, user_number = 1;

    while (user_number != 0) {
        printf("Enter a number: ");
        scanf("%f", &user_number);

        if (user_number > largest_number)
            largest_number = user_number;
    }

    printf("The largest number entered was %.2f", largest_number);
    return 0;
}