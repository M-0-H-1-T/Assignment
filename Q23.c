#include <math.h>
#include <stdio.h>
int main() {
  int i, n;
  float sum = 0, mean, variance = 0, std_deviation;
  printf("\nEnter total numbers (maximum 100) : ");
  scanf("%d", &n);
  float x[n];
  if (n < 100) {
    for (i = 0; i < n; i++) {
      scanf("%f", &x[i]);
      sum += x[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++)
      variance += pow(x[i] - mean, 2);
    std_deviation = sqrt(variance / n);
    printf("\nSum of entered numbers : %f", sum);
    printf("\nMean of entered numbers : %f", mean);
    printf("\nVariance of entered numbers : %f", variance);
    printf("\nStandard deviation of entered numbers = %f", std_deviation);
  } else {
    printf("enter the no. less 100");
  }
  return 0;
}
