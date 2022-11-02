#include <stdio.h>

int main(void) {
  int number;
  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  printf("The reversal is: of %d is ", number);
  do {
    printf("%d", number % 10);
    number = number / 10;
  } while (number > 0);
  printf("\n");
  return 0;
}