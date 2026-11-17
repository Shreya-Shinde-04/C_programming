/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Input         : string character
//  Output        : integer
//  Description   : Accept a string from user and accept one character . return index of first occurance of that character.
//  Date          : 17/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int index = 0;

    while(*str != '\0')
    {
       if(*str == ch)
       {
        return index;
       }
       str++;
       index++;
    }
    return -1;
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

    iRet = FirstChar(arr, cValue);
  
    printf("Character location is %d",iRet);
    
    return EXIT_SUCCESS;
}