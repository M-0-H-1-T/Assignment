// Given a number, write a program using while loop to reverse the digits of the
// number.
#include <stdio.h>
int main() {
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);
  int reverse = 0;
  while (number != 0) {
    reverse = reverse * 10;
    reverse = reverse + number % 10;
    number = number / 10;
  }
  printf("Reverse of the number is: %d", reverse);

  return 0;
}
