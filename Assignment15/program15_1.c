////////////////////////////////////////////////////////////
// 
//  Function Name : DisplayName
//  Input         : String
//  Output        : Display Name
//  Description   : Accept name from user and print that name
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Please enter full name : ");
    scanf("%[^'\n']s",Name);

    printf("Your name is : %s\n",Name);


    return EXIT_SUCCESS;
}