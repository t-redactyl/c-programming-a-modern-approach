//
// Created by Jodie Burchell on 03.01.26.
//
# include <stdio.h>

int main(void) {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, c1,
        first_sum, second_sum, total, calculated_check_sum;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the check digit: ");
    scanf("%1d", &c1);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    calculated_check_sum = 9 - ((total - 1) % 10);

    printf("Calculated check digit: %d\n", calculated_check_sum);
    if (c1 == calculated_check_sum)
        printf("VALID UPC");
    else
        printf("INVALID UPC");

    return 0;
}

