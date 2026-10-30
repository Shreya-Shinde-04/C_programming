/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayTable
//  Input         : Integer
//  Output        : Void
//  Description   : Accept a number from user and display its table
//  Date          : 30/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return 0;
}