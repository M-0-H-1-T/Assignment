#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[1000], ch;
    int count = 0, i;
 
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    printf("Enter a character to find the occurrence: ");
    scanf("%c",&ch);
 
    for(i = 0; a[i] != '\0'; ++i)
    {
        if(ch == a[i])
            ++count;
    }
 
    printf("Occurrence of '%c' = %d", ch, count);
 
    return 0;
}
