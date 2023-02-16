#include <stdio.h>
int isPrime(int);
int isFibonacci(int);

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d is prime number.\n", num);
    }
    else if (isFibonacci(num))
    {
        printf("%d is Fibonacci number.\n", num);
    }
    else
    {
        printf("%d is neither prime nor Fibonacci number.\n", num);
    }
    return 0;
}

int isPrime(int num)
{
    int i;
    if (num <= 1)
    {
        return 0;
    }
    for (i = 2; i < num; ++i)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isFibonacci(int num)
{
    int i = 1, j = 1, k = 0;
    while (k <= num)
    {
        if (k == num)
        {
            return 1;
        }
        k = i + j;
        i = j;
        j = k;
    }
    return 0;
}
