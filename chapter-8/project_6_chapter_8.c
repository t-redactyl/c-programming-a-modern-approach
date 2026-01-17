//
// Created by Jodie Burchell on 17.01.26.
//
#include <ctype.h>
#include <stdio.h>

int main() {
    int length = 0;
    char ch, message[100];

    printf("Enter message: ");
    while ((ch = getchar()) != '\n') {
        message[length] = ch;
        length++;
    }

    for (int i = 0; i < length; i++) {
        message[i] = toupper(message[i]);

        switch (message[i]) {
            case 'A':
                message[i] = '4'; break;
            case 'B':
                message[i] = '8'; break;
            case 'E':
                message[i] = '3'; break;
            case 'I':
                message[i] = '1'; break;
            case '0':
                message[i] = '0'; break;
            case 'S':
                message[i] = '5'; break;
        }

        printf("%c", toupper(message[i]));
    }

    printf("!!!!!!!!!!!");

    return 0;
}