//
// Created by Jodie Burchell on 06.07.25.
//

# include <stdio.h>

int main() {
    int itemNum, day, month, year;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNum);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\t\tPrice\t\tDate\n");
    printf("%d\t\t\t$%7.2f\t%02d/%02d/%4d", itemNum, unitPrice, day, month, year);
    return 0;
}