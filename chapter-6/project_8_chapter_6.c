//
// Created by Jodie Burchell on 05.01.26.
//
#include <stdio.h>

int main() {
    int days_in_month, starting_day, j = 1;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    while (j < starting_day) {
        printf("   ");
        j++;
    }

    for (int i = 1; i <= days_in_month; i++) {
        printf("%2d ", i);
        if (starting_day % 7 == 0) {
            printf("\n");
        }
        starting_day++;
    }
    return 0;
}