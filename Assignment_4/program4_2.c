#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CheckEvernOdd
//  Description     :   it is use to cheack to number 
//                      is Even or Odd
//  Input           :   integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheckEvernOdd(int iValue)
{
    if(iValue%2==0)
    {
        printf("its Even number");
    }
    else
    {
        printf("its Odd number");
    }
}
int main()
{
    int iValue=0;

    printf("enter a number:");
    scanf("%d",&iValue);

    CheckEvernOdd(iValue);
    return EXIT_SUCCESS;
}