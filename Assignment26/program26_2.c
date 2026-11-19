/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Input         : Character
//  Output        : void
//  Description   : Accept character from user, if it is small covert it to corresponding capital, otherwwise display it as it is.
//  Date          : 18/11/2026
//  Author        : Shreya kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch-32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Entre the character:\n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}