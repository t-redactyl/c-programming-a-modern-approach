//
// Created by Jodie Burchell on 03.01.26.
//

#include <stdio.h>

int main() {
    int hour, minute, modified_hour;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour >= 13 & hour <= 23)
        modified_hour = hour - 12;
    else if (hour == 0)
        modified_hour = 12;
    else
        modified_hour = hour;

    printf("Equivalent 12-hour time: %02d:%02d", modified_hour, minute);
    return 0;

}