#include<stdio.h>
#include<math.h>

int main()
{
    FILE *fp;
    fp=fopen("primes.out","w");
    int arr[2501],i,j,count;
    count = 0;
    int x = 2500;
    for(i=2;i<=x;i++)
    {
        arr[i]=1;
    }
    for(i=2;i<=x;i++)
    {
        if(arr[i]==1)//not crossed out
        {
            for(j=i*i;j<=x;j=j+i)
            {
                arr[j]=0;
            }
        }
    }
    for(i=2;i<=x;i++)
    {
        if(arr[i]==1)
        {
            fprintf(fp,"%d ",i);
            count++;
        }
    }
    fprintf(fp,"\nThe number of prime numbers less than %d: %d\n",x,count);
    fclose(fp);
    return 0;
}
