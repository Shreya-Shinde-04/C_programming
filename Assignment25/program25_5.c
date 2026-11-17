/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayScedule
//  Input         : Character
//  Output        : Void
//  Description   : Accept a division from user and depends on division display exam time.
//  Date          : 18/11/2026
//  Author        : Shreya kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayScedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM");
    }else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("No Schedule");
    }

    
}

int main()
{
    char cValue = '\0';

    printf("Enter the Division:\n");
    scanf(" %c", &cValue);

    DisplayScedule(cValue);

    
    return EXIT_SUCCESS;
}