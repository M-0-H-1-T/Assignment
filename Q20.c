#include <stdio.h>
#include<string.h>
 
int main()
{
    char str[100];
    int i, len, vowel_cnt = 0, consonant_cnt = 0, digit_cnt = 0;
 
    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);
 
    len = strlen(str);
 
    for (i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') || (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
            {
                vowel_cnt++;
            }
            else
            {
                consonant_cnt++;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit_cnt++;
        }
    }
 
    printf("Vowels : %d", vowel_cnt);
    printf("\nConsonants : %d", consonant_cnt);
    printf("\nDigits : %d", digit_cnt);
 
    return 0;
}
