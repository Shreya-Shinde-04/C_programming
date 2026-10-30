/////////////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Input         : Integer
//  Output        : Double
//  Description   : Accept area in square feet and convert it into
//                  square meter
//  Date          : 31/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.092903;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf", dRet);

    return 0;
}