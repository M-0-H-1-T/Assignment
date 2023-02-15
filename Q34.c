/*Write a function using pointers to add two matrices and to return the resultant matrix
to the calling funct*/
#include<stdio.h>
void add_print(int (*a)[3],int (*b)[3],int row , int col ){
    int i,j;
    int new[row][col];
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            *(*(new+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
    printf("Matrix obtained after adding two ....\n\n\n");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("%d ",*(*(new+i)+j));
        }
        printf("\n");
    }
}
void input(int (*a)[3],int row ,int col){
    int i,j;
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            scanf("%d",(*(a+i)+j));
        }
    }
}
int main(){
    int mat1[3][3],mat2[3][3];
    printf("Enter the value for matrix 1 :\n");
    input(mat1,3,3);
    printf("Enter the value for matrix 2 :\n");
    input(mat2,3,3);
    add_print(mat1,mat2,3,3);
}
