
///////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayPattern
// Input         : iRow = 5, iCol = 6
//
// Output        : $   *   *   *   *   *
//                 #   $   *   *   *   *
//                 #   #   $   *   *   *
//                 #   #   #   $   *   *
//                 #   #   #   #   $   *
//
// Description   : Display dollar, hash and star pattern
// Date          : 12/11/2026
// Author        : Shreya Kumar Shinde
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j < i)
            {
                printf("#\t");
            }
            else if(j == i)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
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

