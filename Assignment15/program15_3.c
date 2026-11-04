////////////////////////////////////////////////////////////
//
//  Function Name : CheckEqual
//  Input         : Two Integers
//  Output        : Equal or Not Equal
//  Description   : Accept two numbers and check whether
//                  both numbers are equal or not
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = FALSE;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}