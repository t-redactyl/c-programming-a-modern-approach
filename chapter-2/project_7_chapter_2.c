//
// Created by Jodie Burchell on 05.07.25.
//

# include <stdio.h>

int main() {
    int dollarAmount;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollarAmount);

    int numTwenties = dollarAmount / 20;
    int afterTwenties = dollarAmount - (numTwenties * 20);

    int numTens = afterTwenties / 10;
    int afterTens = afterTwenties - (numTens * 10);

    int numFives = afterTens / 5;
    int numOnes = afterTens - (numFives * 5);

    printf("$20 bills: %d\n", numTwenties);
    printf("$10 bills: %d\n", numTens);
    printf("$5 bills: %d\n", numFives);
    printf("$1 bills: %d", numOnes);

    return 0;
}