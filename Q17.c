// Program to merge two arrray of size 10 and sort them
#include<stdio.h>
int main(){
   int i,j,t;
   int str1[10],str2[10],str3[10];
   printf("Enter the element of list 1 :");
   for (i=0;i<5;i++){
      scanf("%d",&str1[i]);
   }
   printf("Enter element of string :\n");
   for (i=0;i<5;i++){
      scanf("%d",&str2[i]);
   }
   for (i=0;i<5;i++){
      str3[i]=str1[i];
   }
   for (i=0;i<5;i++){
      str3[i+5]=str2[i];
   }
   printf("New array after merging is :\n");
   for (i=0;i<10;i++){
      printf("%d ",str3[i]);
   }
   printf("\n");
   for (i=0;i<10;i++){
      for(j=1+i;j<10;j++){
         if (str3[i]>str3[j]){
            t=str3[i];
            str3[i]=str3[j];
            str3[j]=t;
         }
      }
   }
   printf("list after sorting and merging :\n");
   for (i=0;i<10;i++){
      printf("%d ",str3[i]);
   }

   
}
