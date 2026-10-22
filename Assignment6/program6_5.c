/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CalculatBonus
//  Input         :Float(fSalary), Integer(iYears)
//  Output        :Voidc
//  Description   :Calculates bonus based on salary and years of service
//  Date          :22/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalculatBonus(float fSalary, int iYears)
{
   float fBonus = 0.0f;
    if(fSalary>0 && iYears>0)
    {
        if(iYears >10)
        {
            fBonus = fSalary*0.15;
            printf("Bonus = %.2f",fBonus);
        }
        else if(iYears>=5 && iYears<=10)
        {
            fBonus = fSalary*0.1;
            printf("Bonus = %.2f",fBonus);
        }
        else{
            fBonus = fSalary*0.05;
            printf("Bonus = %.2f",fBonus);
        }
    }
    else{
        printf("Invalid input");
        return;
    }
}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and Years of service: ");
    scanf("%f %d", &fSalary,&iYears);

    CalculatBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}