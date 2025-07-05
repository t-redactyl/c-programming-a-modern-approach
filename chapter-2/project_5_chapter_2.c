//
// Created by Jodie Burchell on 05.07.25.
//

# include <stdio.h>

int main() {
    int userInt;

    printf("Please enter an integer: ");
    scanf("%d", &userInt);
    int intPowerFive = userInt * userInt * userInt * userInt * userInt;
    int intPowerFour = userInt * userInt * userInt * userInt;
    int intCubed = userInt * userInt * userInt;
    int intSquared = userInt * userInt;

    int polynomial = (
        3 * intPowerFive
        + 2 * intPowerFour
        - 5 * intCubed
        - intSquared
        + 7 * userInt
        - 6
        );

    printf("The value of y at this value of x is: %d", polynomial);

    return 0;
}