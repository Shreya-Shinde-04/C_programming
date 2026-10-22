#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("It is Even");
    }
    else
    {
        printf("It is Odd");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}