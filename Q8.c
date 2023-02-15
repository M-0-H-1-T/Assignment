#include <stdio.h>
int main() {
  float invAmt, rate, intAmt = 0, total = 0, intFraction = 7.75 / 100;

  printf("Enter Investment Amount: ");
  scanf("%f", &invAmt);
  for (int i = 0; i < 10; i++) {
    intAmt = invAmt*(1 + (i*intFraction));
    total += intAmt;
  }
  printf("The cumulative return after 10 years is %.2f.",total);
  return 0;
}
