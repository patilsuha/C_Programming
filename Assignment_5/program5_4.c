#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CheckMultipleDivisibility
//  Description     :   it is divisible by 5 and 3 or not
//                      
//  Input           :   integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheckMultipleDivisibility(int iValue)
{
    if(iValue%5==0 && iValue%3==0)
    {
        printf("%d is Divisible by both",iValue);
    }
    else if(iValue%5==0 )
    {
        printf("%d is Divisible by 5 only ",iValue);
    }
    else if(iValue%3==0)
    {
        printf("%d is Divisible by 3 only",iValue);
    }
    else 
    {
        printf("not divisible by either");
    }
    
}
int main()
{
    int iValue=0;

    printf("enter number:");
    scanf("%d",&iValue);


    CheckMultipleDivisibility(iValue);
    return EXIT_SUCCESS;
}