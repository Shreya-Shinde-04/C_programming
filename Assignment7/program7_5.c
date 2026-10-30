/////////////////////////////////////////////////////////////////////////
//
//  Function Name :MultipleDisplay
//  Input         :Integer
//  Output        :Void
//  Description   :Accept a number and display its first 5 multiples
//  Date          :30/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        iMul= iNo * iCnt;
        printf("%d\t",iMul);
    }
    

}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}