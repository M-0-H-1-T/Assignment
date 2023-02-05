// Write a program to enter an integer and print the sum of the digits in the integer
#include <stdio.h>
int main() {
  
  int num, sum = 0, r;

  printf("Enter a number: ");
  
  scanf("%d", &num);
  
  if (num != 0) {
    r = num % 10;

    sum += r;

    num /= 10;

    printf("Sum of digits: %d", sum);
    }
  else{
    printf("please enter the valid number");
    }
  return 0;
}
