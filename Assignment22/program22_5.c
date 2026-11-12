/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Input         : Integer (8)
//  Output        : 2 4 6 8 10 12 14 16
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
    int icount = 0;
    
    for(i = 1; i <= iNo; i++)
    {
        icount = i *2;
        printf("%d\t",icount);
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