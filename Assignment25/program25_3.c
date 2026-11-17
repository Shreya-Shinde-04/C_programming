/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkDigit
//  Input         : Character
//  Output        : BOOLEAN
//  Description   : Accept a character from user and check whether it is digit or not.
//  Date          : 17/11/2026
//  Author        : Shreya Kumar shinde
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    return EXIT_SUCCESS;
}