//
// Created by Jodie Burchell on 09.01.26.
//
#include <stdio.h>

int main() {
    char ch, operation;
    float value1, value2, running_total;

    printf("Enter an expresssion: ");
    scanf("%f", &value1);
    running_total = value1;

    while ((ch = getchar()) != '\n') {
        if (ch == '+') {
            operation = ch;
            scanf("%f", &value2);
            running_total += value2;
        }
        if (ch == '-') {
            operation = ch;
            scanf("%f", &value2);
            running_total -= value2;
        }
        if (ch == '*') {
            operation = ch;
            scanf("%f", &value2);
            running_total *= value2;
        }
        if (ch == '/') {
            operation = ch;
            scanf("%f", &value2);
            running_total /= value2;
        }

    }
    printf("Value of expression: %.2f", running_total);

    return 0;
}