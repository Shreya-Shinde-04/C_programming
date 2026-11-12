////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Input         : iRow = 3   i Col = 5
//  Output        : 5 4 3 2 1
//                  5 4 3 2 1
//                  5 4 3 2 1
//
//  Description   : Accept number or row & column from user and print specific pattern
//  Date          : 12/11/2026
//  Author        : Shreya Kumar Shinde
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
  
    
    for(i = 1; i <= iRow; i++)
    {
        
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
            
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of row & column :\n");
    scanf("%d %d", &iValue1, &iValue2);

    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}