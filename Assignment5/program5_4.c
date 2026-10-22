/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CheckDivisibility
//  Input         :Integer
//  Output        :void
//  Description   :Checks Divisibility by 3 and 5
//  Date          :22/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(((iValue % 5) == 0) && ((iValue % 3) == 0))
    {
        printf("Divisible by Both");
    }
    else if((iValue % 5) == 0 )
    {
        printf("Divisible by 5 Only");
    }
    else if((iValue % 3) == 0)
    {
        printf("Divisible by 3 Only");
    }
    else{
        printf("Not Divisible by Either");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);
    return EXIT_SUCCESS;
}