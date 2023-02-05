//Write a program to find the prime numbers between a range of numbers entered by the user
#include <stdio.h>  
int main(){  
    int i,j,m,n;  
    printf("Enter the range of numbers(interval must be greater than 1):\n");  
    scanf("%d %d",&m,&n);  
    printf("Prime numbers between %d and %d are:\n",m,n);  
    for(i=m; i<n; i++)  
    {  
        for(j=2; j<=i/2; j++)  
        {  
            if(i%j==0)  
            break;  
        }  
        if(j>i/2)  
        printf("%d\n",i);  
    }  
    return 0;
  }
