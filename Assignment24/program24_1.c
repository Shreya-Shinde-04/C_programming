/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Input         : string character
//  Output        : bool
//  Description   : Accept a string and character from user and check whether that character is present in string or not.
//  Date          : 17/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
  BOOL ischar = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
          ischar = TRUE;
        }
        str++;
    }
 return ischar;
}

int main()
{
    char arr[20];
    char cValue;

    BOOL bRet = FALSE;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    printf("Enter the character:");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}