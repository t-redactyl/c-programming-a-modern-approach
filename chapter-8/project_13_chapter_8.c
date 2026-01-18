//
// Created by Jodie Burchell on 18.01.26.
//
#include <stdio.h>
#include <ctype.h>

int main() {
    char last_name[20], initial, ch;
    int index = 0;

    printf("Enter a first and last name: ");
    while ((ch = getchar()) == ' ');
    initial = toupper(ch);

    while ((ch = getchar()) != ' ');
    while ((ch = getchar()) == ' ');

    last_name[index++] = ch;
    while ((ch = getchar()) != '\n' && ch != ' ') {
        last_name[index++] = ch;
        }

    for (int i = 0; i < index; i++) {
        printf("%c", last_name[i]);
    }
    printf(", %c.", initial);

    return 0;
}