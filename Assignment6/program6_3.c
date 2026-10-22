/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CalculatDiscount
//  Input         :Integer(Amount)
//  Output        :void
//  Description   :Calculates Discount  based on purchase amount
//  Date          :22/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculatDiscount(int fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;
    
    if(fAmount < 0)
    {
        printf("Invalid input");
        return;
    }
    else if(fAmount >=1000 && fAmount < 5000)
    {
        fDiscount = fAmount * 0.1;
        fFinalAmount = (fAmount- fDiscount);
        printf("Payable Amount= %.2f",fFinalAmount);
    }
    else if(fAmount >=5000 )
    {
        fDiscount = fAmount * 0.2;
        fFinalAmount = (fAmount- fDiscount);
        printf("Payable Amount= %.2f",fFinalAmount);
    }
    else{
        fFinalAmount=fAmount;
        printf("Payable Amount = %.2f",fFinalAmount);
    }
}
int main()
{
    float fAmount = 0.0;

    printf("Enter purchased Amount: ");
    scanf("%f", &fAmount);

    CalculatDiscount(fAmount);

    return EXIT_SUCCESS;
}