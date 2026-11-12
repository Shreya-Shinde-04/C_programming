////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Input         : iRow = 3  iCol = 4
//                  1  1  1  1
//                  2  2  2  2
//                  3  3  3  3
//                  4  4  4  4
//
//  Output        : void
//  Description   : Accept number or row & column from user and print specific pattern
//  Date          : 12/11/2026
//  Author        : Shreya kumar Shinde
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
        
        for(j = 1 ; j <= iCol; j++)
        {
            
                printf("%d\t",i);
    
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