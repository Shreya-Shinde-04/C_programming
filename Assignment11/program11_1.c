
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayRange
//  Input         : Integer, Integer
//  Output        : Void
//  Description   : Accept range from user and display all numbers
//                  between that range. If starting number is greater
//                  than ending number, display Invalid Range.
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting number: \n");
    scanf("%d", &iValue1);

    printf("Enter ending number: \n");
    scanf("%d", &iValue2);

    DisplayRange(iValue1, iValue2);

    return EXIT_SUCCESS;
}
