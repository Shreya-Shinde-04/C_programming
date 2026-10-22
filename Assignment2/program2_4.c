#include<stdio.h>
#include<stdlib.h>

void Display(int iNo,int iFrequency)
{
    int icnt = 0;
    for(icnt = 1; icnt <= abs(iFrequency); icnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    printf("Enter number :");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}