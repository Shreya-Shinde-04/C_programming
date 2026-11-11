
///////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayPattern
// Input         : iRow = 4, iCol = 4
//
// Output        :   *
//                   *   *
//                   *   *   *
//                   *   *   *   *
//
// Description   : Accept number of rows and columns and display
//                 star pattern
// Date          : 12/11/2026
// Author        : Shreya Kumar Shinde
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= i && j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    DisplayPattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}


