
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFactors
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept number from user and return multiplication
//                  of all factors of that number
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultFactors(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo <= 0)
    {
        return -1;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = MultFactors(iValue);

    if(iRet == -1)
    {
        printf("Invalid Number\n");
    }
    else
    {
        printf("Multiplication of factors is: %d\n", iRet);
    }

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
/////////////////////////////////////////////////////////////////////////
