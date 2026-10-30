/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateFactorial
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept a number and calculate its factorial
//  Date          : 30/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CalculateFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CalculateFactorial(iValue);

    printf("Factorial is: %d", iRet);

    return 0;
}