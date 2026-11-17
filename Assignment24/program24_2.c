/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CuntChar
//  Input         : string character
//  Output        : int
//  Description   : Accept a string from user and accept one character and return the frequency of that character.
//  Date          : 17/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CuntChar(char *str, char ch)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue;

    int iRet =  0;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    printf("Enter the character:");
    scanf(" %c", &cValue);

    iRet = CuntChar(arr, cValue);

   
    printf("Character frequency is %d",iRet);
    

    return EXIT_SUCCESS;
}