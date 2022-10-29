#include <stdio.h>

int main(void) {
  int m, n, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &m, &n);
  int numerator = m;
  int denominator = n;

  if (m > n) {
    int temp = n;
    n = m;
    m = temp;
  }

  while (n > 0) {
    int remainder = m % n;
    m = n;
    n = remainder;
    if (n == 0) {
      gcd = m;
    }
  }
  //   printf("GCD %d\n", gcd);
  //   int numerator = m / gcd;
  //   int denominator = n / gcd;
  //   printf("numerator %d\n", numerator);
  //   printf("denominator %d\n", denominator);

  printf("In lowest terms: %d/%d ", numerator / gcd, denominator / gcd);
  return 0;
}
