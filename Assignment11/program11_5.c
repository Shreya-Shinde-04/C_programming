
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayReverse
//  Input         : Integer, Integer
//  Output        : Void
//  Description   : Accept range from user and display all numbers
//                  in between that range in reverse order
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
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

    DisplayReverse(iValue1, iValue2);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
/////////////////////////////////////////////////////////////////////////
