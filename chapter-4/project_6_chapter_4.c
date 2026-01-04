//
// Created by Jodie Burchell on 24.08.25.
//

# include <stdio.h>

int main() {
    int ean1, ean2, ean3, ean4, ean5, ean6,
        ean7, ean8, ean9, ean10, ean11, ean12;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d %1d%1d%1d%1d%1d%1d",
        &ean1, &ean2, &ean3, &ean4, &ean5, &ean6,
        &ean7, &ean8, &ean9, &ean10, &ean11, &ean12
        );

    int first_sum = ean2 + ean4 + ean6 + ean8 + ean12;
    int second_sum = ean1 + ean3 + ean5 + ean7 + ean9 + ean11;
    int total = (first_sum * 3) + second_sum;
    int adj_total = total - 1;
    int remainder = adj_total % 10;

    printf("Check digit: %d", 9 - remainder);

    return 0;
}