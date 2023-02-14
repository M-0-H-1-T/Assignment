// Prgram to find hcf of two number
#include<stdio.h>
int main(){
    int a,b,i,flag,j;
    printf("Enter two integer :");
    scanf("%d%d",&a,&b);
    flag=1;
    for (j=2;j<a || j<b;j++){
        if (a%j==0 && b%j==0){
            flag*=j;
        }
    }
    printf("HCF is %d",flag);
}