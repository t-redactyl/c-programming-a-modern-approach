//
// Created by Jodie Burchell on 03.01.26.
//

#include <stdio.h>

int main() {
    float  num_shares, price_per_share, total_value, your_commission, rival_commission;

    printf("Enter number of shares: ");
    scanf("%f", &num_shares);

    printf("Enter the price per share: $");
    scanf("%f", &price_per_share);

    total_value = num_shares * price_per_share;

    printf("\nTotal value of trade: $%.2f", total_value);

    if (total_value < 2500.00f)
        your_commission = 30.00f + .017f * total_value;
    else if (total_value < 6250.00f)
        your_commission = 56.00f + .0066f * total_value;
    else if (total_value < 20000.00f)
        your_commission = 76.00f + .0034f * total_value;
    else if (total_value < 50000.00f)
        your_commission = 100.00f + 0.0022f * total_value;
    else if (total_value < 500000.00f)
        your_commission = 155.00f + .0011f * total_value;
    else
        your_commission = 255.00f + .0009f * total_value;

    if (your_commission < 39.00f)
        your_commission = 39.00f;

    if (num_shares < 2000)
        rival_commission = 33.00f + 0.03 * num_shares;
    else if (num_shares >= 2000)
        rival_commission = 33.00f + 0.02 * num_shares;

    printf("\nYour commission: $%.2f", your_commission);
    printf("\nOther broker's commission: $%.2f", rival_commission);

    return 0;
}