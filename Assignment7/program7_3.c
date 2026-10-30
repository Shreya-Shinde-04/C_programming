/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Display
//  Input         :Integer
//  Output        :Void
//  Description   :Accept the number and Display its number line from -N to N
//  Date          :30/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}