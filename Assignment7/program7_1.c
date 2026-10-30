/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Pattern
//  Input         :Integer
//  Output        :Void
//  Description   :Accept a number from user and display the pattern using $ &and * 
//  Date          :30/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}