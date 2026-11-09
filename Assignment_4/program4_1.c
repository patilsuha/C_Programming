#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CheakNumber
//  Description     :   it is use to cheack to number 
//                      is positive or neagative
//  Input           :   integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheckNumber(int iValue)
{
    if(iValue>0)
    {
        printf("its positive number");
    }
    else if(iValue<0)
    {
        printf("its neagative number");
    }
    else
    {
        printf("its zero");
    }
}
int main()
{
    int iValue=0;

    printf("enter a number:");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    return EXIT_SUCCESS;
}
