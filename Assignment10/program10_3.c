/////////////////////////////////////////////////////////////////////////
//
//  Function Name : KilometerToMeter
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept distance in kilometre and convert it into meter
//  Date          : 31/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KilometerToMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometer: \n");
    scanf("%d", &iValue);

    iRet = KilometerToMeter(iValue);

    printf("Distance in meter is: %d", iRet);

    return 0;
}