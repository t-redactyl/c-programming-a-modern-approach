//
// Created by Jodie Burchell on 08.01.26.
//
#include <stdio.h>

int main() {
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n') {
        len++;
        ch = getchar();
    }
    printf("Your message was %d characters long.\n", len);

    return 0;
}