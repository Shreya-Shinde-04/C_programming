/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayReverseTable
//  Input         : Integer
//  Output        : Void
//  Description   : Accept a number from user and display its table
//                  in reverse order
//  Date          : 30/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayReverseTable(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DisplayReverseTable(iValue);

    return 0;
}