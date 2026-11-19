/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Input         : Character
//  Output        : void
//  Description   : Accept character from user, if it is small then print all characters in reverse order till 'a'. if it is capital then display all the characters from the input till 'z'. in other case return directly.
//  Date          : 18/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int i = 0;
    int j = 0;

    if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t",ch);
            ch--;
        }
        
    }
    else if(ch >='A' && ch <= 'Z')
    {
        for(j = ch; j<= 'Z'; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        
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