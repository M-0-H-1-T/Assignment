#include <stdio.h>
int main() {
  int number;

  printf("Enter the number: ");

  scanf("%d",&number);

  int leftshifted = (number << 1);

  printf("Left Shifted Number is %d and Multiplication by 2 result: %d\n",
         leftshifted, (2 * number));

  int rightshifted = (number >> 1);

  printf("Right Shifted Number is %d and Division by 2 result: %d\n",
         rightshifted, (number / 2));

  return 0;
}
