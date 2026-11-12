/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Input         : 5
//  Output        : A B C D E
//  Description   : Accept number of elements from user and print specific pattern
//  Date          : 12/11/2026
//  Author        : Shreya kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{   
    int i = 0;
    char ch = 'A';
    for(i = 1; i <= iNo; i++)
    {
        printf("%c\t",ch);
        ch++;
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