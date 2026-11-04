////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Input         : Integer
//  Output        : TRUE or FALSE
//  Description   : Demonstrate the use of typedef int bool
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Please Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}