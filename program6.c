/*Given a n integer number write a program that displays the number as follows
First line : All digits
Second Line : All except first digit
Third line : All except first two digits
.
.
Last line : The last digit*/


#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number rows :");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for (j=i;j<n;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
}