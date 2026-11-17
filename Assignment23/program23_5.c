/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Input         : String
//  Output        : integer
//  Description   : Accept a string from user and count white spaces in it.
//  Date          : 17/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
          icount++;
        }
        str++;
    }
 return icount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}