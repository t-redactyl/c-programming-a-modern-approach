//
// Created by Jodie Burchell on 08.01.26.
//
#include <stdio.h>

int main() {
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n')
        len++;
    printf("Your message was %d characters long.\n", len);

    return 0;
}