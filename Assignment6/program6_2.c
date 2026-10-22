/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CheckAdmission
//  Input         :Float(Marks) , Integer(Age)
//  Output        :void
//  Description   :Checks admission eligibility based on marks and age
//  Date          :22/10/2026
//  Author        :Shreya Kumar Shinde
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
    if(fMarks < 0 || fMarks >100 || iAge<0)
    {
        printf("Invalid Input");
        return;
    }
   if(fMarks >=60 && iAge>=17)
   {
    printf("Eligible for Admission");
   }
   else
   {
    printf("Not Eligible");
   }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}