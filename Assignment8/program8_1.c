/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Input         : Integer
//  Output        : Void
//  Description   : Accept a number and display Small, Medium or Large
//  Date          : 30/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CheckNumber(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Number is 50 or 100");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return 0;
}