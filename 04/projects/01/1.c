#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    int ones = number % 10;
    number = number / 10;
    printf("The reversal is: %d%d\n", ones, number);

    return 0;
}