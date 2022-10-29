#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    int first = number % 8;
    number = number / 8;

    int second = number % 8;
    number = number / 8;
 
    int third = number % 8;
    number = number / 8;

    int fourth = number % 8;
    number = number / 8;

    int fifth = number % 8;

    printf("%d%d%d%d%d\n", fifth, fourth, third, second, first);
    return 0;
}