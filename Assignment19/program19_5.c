
///////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayPattern
// Input         : iRow = 4, iCol = 4
//
// Output        : 1   2   3   4
//                     2   3   4
//                         3   4
//                             4
//
// Description   : Display right aligned number pattern
// Date          : 12/11/2026
// Author        : Shreya Kumar Shinde
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0, k = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(k = 1; k < i; k++)
        {
            printf("\t");
        }

        for(j = i; j <= iCol; j++)
        {
            printf("%d\t", j);
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

    return 0;
}

