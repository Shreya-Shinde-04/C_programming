//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :CheckTriangle
//  Input         :Integer(iSide1), Integer(iSide2), Integer(iSide3)
//  Output        :void
//  Description   :Checks valid triangle by comparing sum of two sides greater than third side
//  Date          :22/10/2026
//  Author        :Shreya Kumar Shinde
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1<0 || iSide2<0 || iSide3<0)
    {
        printf("Invalid input");
        return;
    }
    if((iSide1+iSide2) > iSide3 && (iSide1+iSide3)>iSide2 && (iSide2+iSide3)>iSide1)
    {
        printf("Valid Triangle");
    }
    else{
        printf("Invalid triangle");
    }
}
int main()
{

    int iSide1=0, iSide2=0, iSide3=0;

    printf("Enter three sides :");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);
    return EXIT_SUCCESS;
}