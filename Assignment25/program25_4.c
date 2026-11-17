/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Input         : Character
//  Output        : BOOLEAN
//  Description   : Accept a character from user and check whether it is Capital aplhabet or not
//  Date          : 18/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Character:\n");
    }
    else
    {
        printf("It is not a Small Character");
    }
    return EXIT_SUCCESS;
}