/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference()
//  Input         : string
//  Output        : void
//  Description   : Accept string from user and return difference between frequency of small characters and frequency of capital characters. 
//  Date          : 18/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int Capital = 0;
    int Small = 0;

    int iCnt = 0;
    int jCnt = 0;

    while( *str != '\0')
    {
        if(*str >= 'A' &&  *str <= 'Z')
        {
            Capital = iCnt++;
        }
        else if(*str >= 'a' &&  *str <= 'z')
        {
            Small = jCnt++;
        }
        str++;

    }
    
    return (Capital - Small);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Entre  string:\n");
    scanf("%[^\n]s",arr);

    iRet = Difference(arr);

    if(iRet < 0)
    {
        iRet = -iRet;
    }
    printf("%d", iRet);

    return EXIT_SUCCESS;
}