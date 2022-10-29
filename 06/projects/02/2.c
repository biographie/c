#include <stdio.h>

int main(void) {
  int m, n, gcd;

  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);

  // swap variables in case the second input is greater than the first
  if (m > n) {
    int temp = n;
    n = m;
    m = temp;
  }
  //  infinite loop idiom using while loop
  while (n > 0) {
    int remainder = m % n;
    m = n;
    n = remainder;
    if (n == 0) {
      gcd = m;
    }
  }
  printf("Greatest commmon divisor is: %d", gcd);
  return 0;
}