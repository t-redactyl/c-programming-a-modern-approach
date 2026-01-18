//
// Created by Jodie Burchell on 09.01.26.
//
#include <stdio.h>

int main() {
    char ch, user_initial;

    printf("Enter a first and last name: ");
    while ((ch = getchar()) == ' '); // Consumes spaces
    user_initial = ch;

    while ((ch = getchar()) != ' '); // Consumes rest of first name

    while ((ch = getchar()) == ' ');// Consumes spaces between names
    printf("%c", ch);

    while ((ch = getchar()) != '\n') {
        if (ch != ' ')
            printf("%c", ch);
    }
    printf(" , %c.", user_initial);

    return 0;
}
