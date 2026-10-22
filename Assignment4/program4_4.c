#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iage)
{
    if(iage > 18)
    {
        printf("Eligible for Voting");
    }
    else if(iage < 0)
    {
        printf("Invalid Age");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iAge = 0;
    

    printf("Enter your age: \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);
    return EXIT_SUCCESS;
}