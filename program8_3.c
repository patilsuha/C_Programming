#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Factorial
//  Description     :   it is use to print factorial
//  Input           :   integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int i=0;
    int Fact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo;i>=1;i--)
    {
        Fact=Fact*i;
    }
    return Fact;
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("factorial is %d",iRet);

    return EXIT_SUCCESS;
}