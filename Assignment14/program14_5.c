
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorDiff
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept number from user and return difference
//                  between summation of all its factors and
//                  non-factors
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FactorDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    if(iNo <= 0)
    {
        return -1;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = FactorDiff(iValue);

    if(iRet == -1)
    {
        printf("Invalid Number\n");
    }
    else
    {
        printf("Difference is: %d\n", iRet);
    }

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
/////////////////////////////////////////////////////////////////////////
