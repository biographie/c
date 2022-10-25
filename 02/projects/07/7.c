#include <stdio.h>

int main(void){

    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int numberOfTwentyBills = amount / 20;
    amount -= numberOfTwentyBills * 20;
    
    int numberOfTenBills = amount / 10;
    amount -= numberOfTenBills * 10;


    int numberOfFiveBills = amount / 5;
    amount -= numberOfFiveBills * 5;


    int numberOfOneBills = amount / 1;

    printf("$20 bills: %d\n", numberOfTwentyBills);
    printf("$10 bills: %d\n", numberOfTenBills);
    printf(" $5 bills: %d\n", numberOfFiveBills);
    printf(" $1 bills: %d\n", numberOfOneBills);

    return 0;
}