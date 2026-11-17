/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : struprx
//  Input         : string
//  Output        : void
//  Description   : Accept a string from user and convert it into upper case.
//  Date          : 17/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
            
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^\n]s",arr);

    struprx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}