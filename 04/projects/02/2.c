#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a three- digit number: ");
    scanf("%d", &number);
    int ones = number % 10;
    number = number / 10;
    int tens = number % 10;
    number = number / 10;

    printf("The reversal is: %d%d%d\n", ones, tens, number);

    return 0;
}