#include <stdio.h>

int main(void){
    float loanAmount;
    float interestRate;
    float monthlyPayment;

    printf("Enter amount of loan:");
    scanf("%f", &loanAmount);

    printf("Enter interest rate");
    scanf("%f", &interestRate);

    printf("Enter monthly payment:"); 
    scanf("%f", &monthlyPayment);
    
    float monthlyInterestRate = (interestRate/100) / 12;

    loanAmount= loanAmount - monthlyPayment + (loanAmount * monthlyInterestRate);
    printf("Balance remaining after first payment: $%.2f", loanAmount);

    loanAmount= loanAmount - monthlyPayment + (loanAmount * monthlyInterestRate);
    printf("Balance remaining after second payment: $%.2f", loanAmount);

    loanAmount= loanAmount - monthlyPayment + (loanAmount * monthlyInterestRate);
    printf("Balance remaining after third payment: $%.2f", loanAmount);

    return 0;
}