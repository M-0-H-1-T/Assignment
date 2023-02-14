/*Write a Program that will read Employees name, Level and Basic pay and will print Gross
salary, Tax and Net Salary. Use Switch-case statement and if*/


#include<stdio.h>
void cal(int basic_pay,int perks,int rate){
    int gross_salary,tax,net_salary;
    int HRA=basic_pay/4;
    gross_salary=HRA+perks+basic_pay;
    tax=(gross_salary*rate)/100;
    net_salary=gross_salary-tax;
    printf("Gross Salary :%d\n",gross_salary);
    printf("TAX :%d\n",tax);
    printf("Net salary :%d\n",net_salary);
}
int main(){
    int basic_pay,level,HRA,gross_salary,tax,rate,perks;
    char name[44];
    printf("Enter the name of the employee :");
    fgets(name,44,stdin);
    printf("Enter the level :");
    scanf("%d",&level);
    switch(level){
        case 1:
        printf("Enter your basic salary between 40000-60000 :");
        scanf("%d",&basic_pay);
        if (basic_pay>=40000 && basic_pay<=60000){
            perks=10000;
            rate=10;
            printf("Name :%s",name);
            cal(basic_pay,perks,rate);
        }
        else {
            printf("Enter Basic Salary is OUT OF RANGE ....\n");
        }
        break;
        case 2:
        printf("Enter your basic salary between 30000-40000 :");
        scanf("%d",basic_pay);
        if (basic_pay>=30000 && basic_pay<=40000){
            perks=8000;
            rate=8;
            printf("Name :%s",name);
            cal(basic_pay,perks,rate);
        }
        else {
            printf("Enter Basic Salary is OUT OF RANGE ....\n");
        }
        break;
        case 3:
        printf("Enter your basic salary between 40000-60000 :");
        scanf("%d",basic_pay);
        if (basic_pay>=20000 && basic_pay<=30000){
            perks=6500;
            rate=5;
            printf("Name :%s",name);
            cal(basic_pay,perks,rate);
        }
        else {
            printf("Enter Basic Salary is OUT OF RANGE ....\n");
        }
        break;
        case 4:
        printf("Enter your basic salary between 15000-20000 :");
        scanf("%d",basic_pay);
        if (basic_pay>=15000 && basic_pay<=20000){
            perks=6500;
            rate=0;
            printf("Name :%s",name);
            cal(basic_pay,perks,rate);
        }
        else {
            printf("Enter Basic Salary is OUT OF RANGE ....\n");
        }
        break;
        default :
        printf("You Enter the INVALID LEVEL.");
    } 
}
