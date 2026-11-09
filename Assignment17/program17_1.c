
///////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayPattern
// Input         : iRow = 4   iCol = 4

// Output        :  1   2   3   4
//                  5   6   7   8
//                  9   1   2   3
//                  4   5   6   7
// Description   : Display consecutive numbers from 1 to 9 repeatedly
// Date          : 10/11/2026
// Author        : Shreya Kumar Shinde
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);

            iNum++;

            if(iNum > 9)
            {
                iNum = 1;
            }
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
