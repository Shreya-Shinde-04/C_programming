/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Input         : string character
//  Output        : integer
//  Description   : Accept a string from user and accept one character . return index of last occurance of that character.
//  Date          : 17/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int  LastChar(char *str, char ch)
{
    int index = 0;
    int lastindex = -1;

    while(*str != '\0')
    {
       if(*str == ch)
       {
        lastindex = index;
       }
       str++;
       index++;
    }
    return lastindex;
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

    iRet = LastChar(arr, cValue);
  
    printf("Character location is %d",iRet);
    
    return EXIT_SUCCESS;
}