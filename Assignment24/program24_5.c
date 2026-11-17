/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrRevX
//  Input         : string
//  Output        : void
//  Description   : Accept a string from user and reverse the string.
//  Date          : 17/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int icount = 0;
    while(str[icount] != '\0')
    {
      icount++;
    }
    
    for(int i =icount-1; i>= 0; i--)
    {
        printf("%c",str[i]);
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    printf("reveres string is\n");
    StrRevX(arr);

    return EXIT_SUCCESS;
}