#include <stdio.h>

int main(void) {
  float max;
  float n;
  for (;;) {
    printf("Enter a positive number (enter 0 to stop)");
    scanf("%f", &n);
    if (n <= 0) {
      break;
    } else {
      if (n > max) {
        max = n;
      }
    }
  }
  printf("The largest number entered was %.2f\n", max);

  return 0;
}