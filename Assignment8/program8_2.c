/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Input         : Integer
//  Output        : Void
//  Description   : Accept a single digit number and print it into word
//  Date          : 30/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo > 11)
    {
        printf("Invalid number");
        return;
    }

    switch(iNo)
    {
        case 0:
            printf("Zero");
            break;

        case 1:
            printf("One");
            break;

        case 2:
            printf("Two");
            break;

        case 3:
            printf("Three");
            break;

        case 4:
            printf("Four");
            break;

        case 5:
            printf("Five");
            break;

        case 6:
            printf("Six");
            break;

        case 7:
            printf("Seven");
            break;

        case 8:
            printf("Eight");
            break;

        case 9:
            printf("Nine");
            break;

        case 10:
            printf("Ten");
            break;

        case 11:
            printf("Eleven");
            break;    
    }
}

int main()
{
    int iValue = 0;

    printf("Enter single digit number: \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}