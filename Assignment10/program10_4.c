/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FahrenheitToCelsius
//  Input         : Float
//  Output        : Float
//  Description   : Accept temperature in Fahrenheit and convert it
//                  into Celsius
//  Date          : 31/10/2026
//  Author        : Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FahrenheitToCelsius(float fTemp)
{
    float fCelsius = 0.0f;

    fCelsius = (fTemp - 32) * (5.0f / 9.0f);

    return fCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f", &fValue);

    dRet = FahrenheitToCelsius(fValue);

    printf("Temperature in Celsius is: %f", dRet);

    return 0;
}