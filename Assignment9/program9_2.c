/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DollarToInr
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept amount in US dollar and return its
//                  corresponding value in Indian currency
//  Date          : 30/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToInr(int iNo)
{
    int iRupees = 0;

    iRupees = iNo * 70;

    return iRupees;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in US Dollar: \n");
    scanf("%d", &iValue);

    iRet = DollarToInr(iValue);

    printf("Indian Currency is: %d", iRet);

    return 0;
}