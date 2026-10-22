#include<stdio.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("It is Positive number");
    }
    else if(iNo < 0)
    {
        printf("It is Negative number");
    }
    else{
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);
    return 0;
}