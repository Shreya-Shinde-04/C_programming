/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Display
//  Input         :Integer
//  Output        :Void
//  Description   :Accept the number and Display Odd number from 1 to N
//  Date          :30/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}