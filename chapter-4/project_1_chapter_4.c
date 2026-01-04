//
// Created by Jodie Burchell on 24.08.25.
//

# include <stdio.h>

int main(void) {
    int user_d;

    printf("Enter a two-digit number: ");
    scanf("%2d", &user_d);

    int digit_1 = user_d / 10;
    int digit_2 = user_d % 10;

    printf("The reversal is: %d%d", digit_2, digit_1);

    return 0;
}