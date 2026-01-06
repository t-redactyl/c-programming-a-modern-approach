//
// Created by Jodie Burchell on 06.01.26.
//
#include <stdio.h>

int main() {

    int day, month, year, earliest_day = 32, earliest_month = 13, earliest_year = 9999;

    while (1) {
        printf("Enter a date (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &day, &month, &year);

        if (day == 0 && month == 0 && year == 0) {
            break;
        }

        if (year < earliest_year) {
            earliest_year = year;
            earliest_month = month;
            earliest_day = day;
        }
        else if (year == earliest_year && month < earliest_month) {
            earliest_year = year;
            earliest_month = month;
            earliest_day = day;
        }
        else if (year == earliest_year && month == earliest_month && day < earliest_day) {
            earliest_year = year;
            earliest_month = month;
            earliest_day = day;
        }
    }
    printf("%02d/%02d/%d is the earliest date.", earliest_day, earliest_month, earliest_year);

    return 0;

}