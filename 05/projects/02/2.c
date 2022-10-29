#include <stdio.h>

int main(void) {
  int hours, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  int twelveHour;

  if (hours > 12) {
    twelveHour = hours % 12;
    printf("Equivalent 12-hour time: %d:%.2d PM\n", twelveHour, minutes);
  } else {
    printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, minutes);
  }
  return 0;
}