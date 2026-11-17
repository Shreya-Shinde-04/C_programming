/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel()
//  Input         : String
//  Output        : BOOLEAN
//  Description   : Accept string from user and check whether it contains vowel or not. 
//  Date          : 18/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while( *str != '\0')
    {
       if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'||
          *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return TRUE;
        }
        str++;
    }
    
    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Entre  string:\n");
    scanf("%[^\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}