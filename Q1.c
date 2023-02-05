#include <stdio.h>

int main()

{

 int num1, num2, num3, average;

 printf("Enter 3 numbers: ");

 scanf("%d%d%d", &num1, &num2, &num3);

 average = (num1 + num2 + num3)/3;

 printf("Average of the 3 numbers = %d", average);

 return 0;

}
