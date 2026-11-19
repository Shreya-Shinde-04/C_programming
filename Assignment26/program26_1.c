/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII()
//  Output        : void
//  Description   : Display ASCII table from 0 to 255.
//  Date          : 18/11/2026
//  Author        : Shreya kumar Shinde
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    printf("Decimal\tHexadecimal\toctal\tSymbol");
    printf("\n");

    for(int i =0; i<=255; i++)
    {
       printf("%d\t\t\t%X\t\t\t%o\t\t\t%c",i,i,i,i);
       printf("\n");
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}