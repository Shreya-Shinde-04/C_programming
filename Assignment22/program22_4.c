/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Input         : Integer (4)
//  Output        : # 1 * # 2 * # 3 * # 4
//  Description   : Accept number of elements from user and print specific pattern
//  Date          : 12/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{   
    int i = 0;
    
    for(i = 1; i <= iNo; i++)
    {
        printf("#\t%d\t*\t",i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iValue);

    pattern(iValue);
    
    return EXIT_SUCCESS;
}