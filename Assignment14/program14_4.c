
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFactors
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept number from user and return summation
//                  of all its non-factors
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        return -1;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = SumNonFactors(iValue);

    if(iRet == -1)
    {
        printf("Invalid Number\n");
    }
    else
    {
        printf("Summation of non-factors is: %d\n", iRet);
    }

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
/////////////////////////////////////////////////////////////////////////
