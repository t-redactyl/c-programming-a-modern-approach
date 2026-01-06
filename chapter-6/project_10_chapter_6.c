//
// Created by Jodie Burchell on 06.01.26.
//
#include <stdio.h>

int main() {
    int day, month, year, earliest_date = 99999, year_diff,
    month_diff, day_diff, time_since_origin,
    earliest_day, earliest_month, earliest_year;

    do {
        printf("Enter a date (dd/mm/yyyy): ");
        scanf("%2d/%2d/%4d", &day, &month, &year);

        year_diff = (year - 1970) * 365;
        month_diff = (month - 1) * 30;
        day_diff = (day - 1);

        time_since_origin = year_diff + month_diff + day_diff;

        if (time_since_origin < earliest_date & day != 0) {
            earliest_date = time_since_origin;
            earliest_day = day;
            earliest_month = month;
            earliest_year = year;
        }
    } while (day != 0 & month != 0 & year != 0);

    printf("%02d/%02d/%d", earliest_day, earliest_month, earliest_year);

    return 0;
}
