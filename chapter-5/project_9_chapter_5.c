//
// Created by Jodie Burchell on 04.01.26.
//
#include <stdio.h>

int main() {
    int day1, month1, year1, day2, month2, year2;

    printf("Enter first date (dd/mm/yy): ");
    scanf("%2d/%2d/%2d", &day1, &month1, &year1);

    printf("Enter second date (dd/mm/yy): ");
    scanf("%2d/%2d/%2d", &day2, &month2, &year2);

    if (year1 > year2)
        printf("\n%02d/%02d/%02d is larger", day1, month1, year1);
    else if (year2 > year1)
        printf("\n%02d/%02d/%02d is larger", day2, month2, year2);
    else if (year1 == year2 & month1 > month2)
        printf("\n%02d/%02d/%02d is larger", day1, month1, year1);
    else if (year1 == year2 & month1 < month2)
        printf("\n%02d/%02d/%02d is larger", day2, month2, year2);
    else if (year1 == year2 & month1 == month2 & day1 > day2)
        printf("\n%02d/%02d/%02d is larger", day1, month1, year1);
    else if (year1 == year2 & month1 == month2 & day1 < day2)
        printf("\n%02d/%02d/%02d is larger", day2, month2, year2);
    else
        printf("\nBoth dates are the same");

    return 0;
}