/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateArea
//  Input         : Float
//  Output        : Float
//  Description   : Accept radius of circle and calculate its area
//  Date          : 31/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 0.0f;

    fArea = 3.14f * fRadius * fRadius;

    return fArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius of circle: \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %f", dRet);

    return 0;
}