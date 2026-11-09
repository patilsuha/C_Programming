#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CheckDivisibility
//  Description     :   it is divisible by 5 or not
//                      
//  Input           :   integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheckDivisibility(int iValue)
{
    if(iValue%5==0)
    {
        printf("Divisible by 5");
    }
    else 
    {
        printf("not Divisible by 5");
    }
    
}
int main()
{
    int iValue=0;

    printf("enter number:");
    scanf("%d",&iValue);


    CheckDivisibility(iValue);
    return EXIT_SUCCESS;
}