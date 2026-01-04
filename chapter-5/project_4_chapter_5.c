//
// Created by Jodie Burchell on 03.01.26.
//

#include <stdio.h>

int main() {
    float wind_speed;

    printf("Enter wind speed (in knots): ");
    scanf("%f", &wind_speed);

    printf("The Beauford scale description is ");
    if (wind_speed < 0)
        printf("INVALID VALUE");
    else if (wind_speed >= 0 & wind_speed < 1)
        printf("calm.");
    else if (wind_speed >= 1 & wind_speed < 4)
        printf("light air.");
    else if (wind_speed >= 4 & wind_speed < 28)
        printf("breeze.");
    else if (wind_speed >= 28 & wind_speed < 48)
        printf("gale.");
    else if (wind_speed >= 48 & wind_speed < 64)
        printf("storm.");
    else
        printf("hurricane");

    return 0;
}