//
// Created by Jodie Burchell on 06.07.25.
//

# include <stdio.h>

int main() {

    int day, month, year;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%2d/%2d/%4d", &day, &month, &year);

    printf("You entered the date %02d%02d%d", year, month, day);

    return 0;
}