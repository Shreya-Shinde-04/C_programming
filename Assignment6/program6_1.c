/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CalculateElectricityBill
//  Input         :Integer
//  Output        :void
//  Description   :Calculates electricity bill based on consumed units
//  Date          :22/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{ 
    float fBill = 0.0f;

    if(iUnits < 0)
    { 
        printf("Invalid unit consumption");
    }
    else if (iUnits <= 100)
    { 
        fBill = iUnits * 5;
        printf("Bill = %2.f", fBill);      
    }
    else if(iUnits <= 200)
    { 
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %2.f",fBill);
    }
    else
    { 
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10 );
        printf("Bill = %.2f",fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed Units : ");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;

}