//
// Created by Jodie Burchell on 24.08.25.
//

# include <stdio.h>

int main() {
    int user_d;
    printf("Please enter a number between 0 and 32767: ");
    scanf("%d", &user_d);

    printf("In octal, your number is: %05o", user_d);
}