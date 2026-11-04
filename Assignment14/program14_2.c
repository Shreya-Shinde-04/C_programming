
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Input         : Integer
//  Output        : Void
//  Description   : Accept number from user and display its factors
//                  in decreasing order
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid Number\n");
        return;
    }

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////
//
//  End of Program
//
/////////////////////////////////////////////////////////////////////////
