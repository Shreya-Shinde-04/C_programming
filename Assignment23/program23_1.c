/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Input         : string
//  Output        : void
//  Description   : Accept a string from user and convert it into lower case.
//  Date          : 17/11/2026
//  Author        : Shreya kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
            
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s",arr);

    return EXIT_SUCCESS;
}