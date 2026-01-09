//
// Created by Jodie Burchell on 09.01.26.
//
#include <math.h>
#include <stdio.h>

int main() {
    double x, current_y = 1, new_y, diff, hundred_thousandth_of_y;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        printf("y: %lf\n", current_y);

        double x_over_y = x / current_y;
        printf("x/y: %lf\n", x_over_y);

        new_y = (current_y + x_over_y) / 2;
        printf("Average of y and x/y: %lf\n", new_y);

        diff = fabs(new_y - current_y);
        printf("Difference between new and current y: %lf\n", diff);

        hundred_thousandth_of_y = 0.00001 * current_y;
        printf("Hundred thousandth of y: %lf\n", hundred_thousandth_of_y);

        current_y = new_y;
        printf("New value of y: %lf\n\n", current_y);
    } while (diff > hundred_thousandth_of_y);

    printf("Square root: %lf", current_y);

    return 0;
}