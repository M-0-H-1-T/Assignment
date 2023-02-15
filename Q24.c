#include <stdio.h>
int main()
{
    int n=5, num=1, row, col, space;
    char c = 'A';
    for(row=1; row<=n; row++) {
        // spaces
        for(space=n-row; space; space--) {
            printf(" ");
        }
        // pattern
        for(col=1; col<=row; col++) {
            if(row%2==0) {
                printf("%c ", c);
                c++;
            }
            else {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}
