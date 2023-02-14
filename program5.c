// write a function to implement bitwise operator  AND , OR , XOR , NOT.a
#include<stdio.h>
void bitwise(){
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    c=a&b;
    printf("The result of bitwise AND is : %d\n",c);
    c=a|b;
    printf("The result of bitwise OR  is : %d\n",c);
    c=a^b;
    printf("The result of bitwise XOR is : %d\n",c);
    c=~a;
    printf("The result of bitwise NOT for a is : %d\n",c);

}
int main(){
    bitwise();
}