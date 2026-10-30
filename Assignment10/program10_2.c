/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateArea
//  Input         : Float, Float
//  Output        : Float
//  Description   : Accept width and height of rectangle and calculate
//                  its area
//  Date          : 31/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float fArea = 0.0f;

    fArea = fWidth * fHeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float dRet = 0.0;

    printf("Enter width: \n");
    scanf("%f", &fValue1);

    printf("Enter height: \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is: %f", dRet);

    return 0;
}