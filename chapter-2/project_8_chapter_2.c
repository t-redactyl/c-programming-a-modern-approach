//
// Created by Jodie Burchell on 05.07.25.
//

# include <stdio.h>

int main() {
    float loanAmount, yearlyInterestRate, monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &yearlyInterestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    float monthlyInterestRate = (yearlyInterestRate / 12) / 100 + 1;

    float loanBalanceMonth1 = loanAmount * monthlyInterestRate - monthlyPayment;
    float loanBalanceMonth2 = loanBalanceMonth1 * monthlyInterestRate - monthlyPayment;
    float loanBalanceMonth3 = loanBalanceMonth2 * monthlyInterestRate - monthlyPayment;

    printf("Balance remaining after first payment: %.2f\n", loanBalanceMonth1);
    printf("Balance remaining after second payment: %.2f\n", loanBalanceMonth2);
    printf("Balance remaining after third payment: %.2f\n", loanBalanceMonth3);

    return 0;

}

