//
// Created by Jodie Burchell on 24.08.25.
//

# include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5;
    int o1, o2, o3, o4, o5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &d1);

    o5 = d1 % 8;
    d2 = d1 / 8;
    o4 = d2 % 8;
    d3 = d2 / 8;
    o3 = d3 % 8;
    d4 = d3 / 8;
    o2 = d4 % 8;
    d5 = d4 / 8;
    o1 = d5 % 8;

    printf("In octal, your number is: %d%d%d%d%d",
        o1, o2, o3, o4, o5
        );

    return 0;
}