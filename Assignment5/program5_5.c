#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <='Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(cValue >= 'a' && cValue <='z')
    {
        printf("Lowercase Alphabet");
    }
    else if(cValue >= 48 && cValue <=57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter a character: \n");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);
    return EXIT_SUCCESS;
}