//
// Created by Jodie Burchell on 24.08.25.
//

# include <stdio.h>

int main() {
    int upc1, upc2, upc3, upc4, upc5, upc6, upc7, upc8, upc9,
        upc10, upc11;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d",
        &upc1, &upc2, &upc3, &upc4, &upc5, &upc6, &upc7,
        &upc8, &upc9, &upc10, &upc11
        );

    int first_sum = upc1 + upc3 + upc5 + upc7 + upc9 + upc11;
    int second_sum = upc2 + upc4 + upc6 + upc8 + upc10;
    int total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
}