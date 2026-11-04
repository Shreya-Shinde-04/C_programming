////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Input         : Three Integers
//  Output        : Multiplication
//  Description   : Accept three numbers and print their
//                  multiplication by ignoring zero values.
//                  If all numbers are zero, return zero.
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }

    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }

    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d\n",iRet);

    return EXIT_SUCCESS;
}