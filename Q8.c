// program to input an investment and compute its fixed deposit commulative return after 10 year at the rate 7.75
#include<stdio.h>
int main(){
    float rate=10.0/100,principal,year=6,interest=0;
    int i;
    printf("Enter principal :");
    scanf("%f",&principal);
    for (i=0;i<year;i++){
        interest=principal*rate;
        principal+=interest;
    }
    printf("Commulative deposit raturn will be : %.2f",principal);
}