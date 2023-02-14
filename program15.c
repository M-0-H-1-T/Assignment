/*Write a program to evaluate the following functions to 0.0001% accuracy
Sinx = x – x
3/3! + x
5/5! – x
7/7!+…….*/

#include<stdio.h>
int factorial(int a){
    int i,fact=1;
    for (i=a;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
float power(float x,int p){
    int i;
    float v=1;
    for (i=0;i<p;i++){
        v=x*v;
    }
    return v;
}
int main(){
    int n,i,sign=-1;
    float x,sum=0;
    printf("Enter value of x and no of terms you want to calculate :");
    scanf("%f%d",&x,&n);
    x=x*3.14/180;
    for (i=1;i<=n;i++){
        int j;
        j=2*i-1;
        sum=sum-sign*power(x,j)/factorial(j);

    }
    printf("Value of sin(%.2f) is %.4f",x,sum);
}