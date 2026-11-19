/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial()
//  Input         : Character
//  Output        : BOOLEAN
//  Description   : Accept character from user, if it is from listed special character then return true otherwise false.
//  Date          : 18/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '&' || ch == '*')
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not special character");
    }

    return EXIT_SUCCESS;
}