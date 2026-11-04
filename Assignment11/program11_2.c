
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEven
//  Input         : Integer, Integer
//  Output        : Void
//  Description   : Accept range from user and display all even
//                  numbers in between that range
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
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

    DisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
/////////////////////////////////////////////////////////////////////////
