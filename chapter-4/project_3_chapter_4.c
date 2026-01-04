//
// Created by Jodie Burchell on 24.08.25.
//

# include <stdio.h>

int main(void) {
    int first_d, second_d, third_d;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &first_d, &second_d, &third_d);

    printf("%d%d%d", third_d, second_d, first_d);

    return 0;
}