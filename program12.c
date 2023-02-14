//Write a program to find the prime numbers between a range of numbers entered by the us
#include<stdio.h>
int main(){
    int a,b,i,j,flag;
    printf("Enter starting and ending integer :");
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++){
        flag=0;
        for (j=2;j<i;j++){
            if (i%j==0){
                flag=1;
                break;
            }

        }
        if (flag==0){
            printf("%d ",i);
        }
    }
}
