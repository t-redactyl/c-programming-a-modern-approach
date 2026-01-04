//
// Created by Jodie Burchell on 24.08.25.
//

# include <stdio.h>

int main(void) {
    int user_d;

    printf("Enter a three-digit number: ");
    scanf("%3d", &user_d);

    int first_d = user_d / 100;
    int second_d = (user_d % 100) / 10;
    int third_d = (user_d % 100) % 10;

    printf("%d%d%d", third_d, second_d, first_d);

    return 0;
}