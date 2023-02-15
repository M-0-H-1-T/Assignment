#include <stdio.h>
#include <string.h>

int main() {
    char Line[20];
    char Old[20];
    char New[20];
    printf("enter the string:\n");
    gets(Line);
    printf("old substring to replace:\n");
    gets(Old);
    printf("enter the new substring:\n");
    gets(New);
    char Final[strlen(Line)+(strlen(New)-strlen(Old))];

    int i=0;
    while(Line[i]!=Old[0]) {
        Final[i] = Line[i];
        i++;
    }
    int i2=strlen(Old)+i;
    int j=0;
    while(j<strlen(Old)&&j<strlen(New)) {
        Final[i] = New[j];
        j++;
        i++;
    }
    while(j<strlen(New)) {
        Final[i] = New[j];
        i++;
        j++;
    }
    while(i2<strlen(Line)) {
        Final[i] = Line[i2];
        i2++;
        i++;
    }

    printf("%s\n", Final);
    
    return 0;

}
