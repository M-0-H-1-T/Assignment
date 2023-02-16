
#include <stdio.h>
 
int main()
{
    int A[100], i, *p, n;
 
    
    printf("Enter the number of integers: ");
    scanf("%d", &n);
 
    
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", A + i);
    }
 
    
    p = A + n - 1;
 
    
    printf("The elements in reverse order are: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", *p);
 
        
        p--;
    }
 
    return 0;
}
