#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   FindGreater
//  Description     :   it is use to cheack age is invalid or not
//                      for voting
//  Input           :   integer
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if(iAge>=18)
    {
        printf("Eligible for voting");
    }
    else if(iAge<18 && iAge>1)
    {
        printf("not Eligible for voting");
    }
    else if(0>=iAge)
    {
        printf("invalid age");
    }
}
int main()
{
    int iAge=0;

    printf("enter number:");
    scanf("%d",&iAge);


    CheckVotingEligibility(iAge);
    return EXIT_SUCCESS;
}