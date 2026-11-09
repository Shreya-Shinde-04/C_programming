
///////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayPattern
// Input         : iRow = 4, iCol = 5
//
// Output        : a   b   c   d   e
//                 1   3   5   7   9
//                 a   b   c   d   e
//                 1   3   5   7   9
//                 a   b   c   d   e
//
// Description   : Display alternate character and odd number pattern
// Date          : 10/11/2026
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
            if(i % 2 != 0)
            {
                printf("%c\t", 'a' + j - 1);
            }
            else
            {
                printf("%d\t", (j * 2) - 1);
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
