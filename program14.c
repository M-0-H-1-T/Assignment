// program to print fabbonacci series 1 1 2 3 5 8 13 21.....
#include<stdio.h>
int main(){
    int t1=0,t2=1,a,n,c=0;
    printf("Enter number of terms you want to write :");
    scanf("%d",&a);
    do {
        n=t1+t2;
        printf("%d ",n);
        t1=t2;
        t2=n;
        c++;

    } while(c<=a);
}