////////////////////////////////////////////////////////////
//
//  Function Name : CalculatePercentage
//  Input         : Total Marks and Obtained Marks
//  Output        : Percentage
//  Description   : Accept total marks and obtained marks
//                  from user and calculate percentage.
//  Date          : 04/11/2026
//  Author        : Shreya Kumar Shinde
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float CalculatePercentage(float fTotal, float fObtained)
{
    float fPercentage = 0.0f;

    fPercentage = (fObtained / fTotal) * 100;

    return fPercentage;
}

int main()
{
    float fTotal = 0.0f;
    float fObtained = 0.0f;
    float fRet = 0.0f;

    printf("Enter total marks : ");
    scanf("%f",&fTotal);

    printf("Enter obtained marks : ");
    scanf("%f",&fObtained);

    fRet = CalculatePercentage(fTotal, fObtained);

    printf("Percentage is : %.1f%%\n",fRet);

    return EXIT_SUCCESS;
}