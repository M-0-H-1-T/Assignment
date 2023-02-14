/*Write a C program to display following Pattern
    1
  1 2 1
1 2 3 2 1
  1 2 1
    1
*/


#include<stdio.h>
int main(){
    int i,j,n=3,m=2;
    for (i=1;i<=n;i++){
        for (j=i;j<3;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(j=1;j<i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=1;i<=m;i++){
        for (j=0;j<i;j++){
            printf(" ");
        }
        for (j=1;j<=3-i;j++){
            printf("%d ",j);
        }
        for (j=1;j<=2-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
