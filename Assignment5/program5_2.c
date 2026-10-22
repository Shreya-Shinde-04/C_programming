#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid input");
        return;
    }
    if((iYear % 400) == 0 || (iYear % 4)==0 && !(iYear % 100)==0 )
    {
        printf("Leap Year");
    }
    else 
    {
        printf("Not Leap Year");
    }  
}

int main()
{
    int iYear = 0;

    printf("Enter year: \n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}