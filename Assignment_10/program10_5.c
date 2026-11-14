#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   SquareMeter
//  Description     :   it is use to convert squarefeet to squaremeters
//  Input           :   int
//  Output          :   double
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
double SquareMeter(int iNo)
{
    double dSquareFeet=0.092903;
    double dSquareMeter=0.0;
    dSquareMeter=iNo*dSquareFeet;

    return dSquareMeter;
}

int main()
{
    int iValue=0;
    double dRet=0.0;
    
    printf("enter aria in square feet:");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("Square Meter is:%lf:",dRet);

    return EXIT_SUCCESS;
}