//
// Created by Jodie Burchell on 08.01.26.
//
#include <ctype.h>
#include <stdio.h>

int main() {
    char user_time = ' ';
    int hours, minutes;

    printf("Enter a 12-hour time: ");
    scanf("%d:%2d", &hours, &minutes);

    while ((user_time = toupper(getchar())) != '\n') {
        if (user_time == 'A') {
            if (hours == 12) {
                hours = 0;
                break;
            }
        }
        if (user_time == 'P') {
            if (hours != 12) {
                hours += 12;
                break;
            }
        }
    }

    printf("Equivalent 24-hour time: %02d:%2d", hours, minutes);

    return 0;
}