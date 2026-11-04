
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Input         : Integer, Integer
//  Output        : Integer
//  Description   : Accept range from user and return addition of all
//                  numbers in between that range. Range should
//                  contain positive numbers only.
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart <= 0) || (iEnd <= 0) || (iStart > iEnd))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting number: \n");
    scanf("%d", &iValue1);

    printf("Enter ending number: \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Addition is: %d\n", iRet);
    }

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
/////////////////////////////////////////////////////////////////////////
