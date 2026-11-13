#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   FactorialDiff
//  Description     :   it is use to print diff of odd and even factorial of number
//  Input           :   integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
  
    int i=0;
    int eFact=1;
    int oFact=1;
    int factDiff=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo;i>=1;i--)
    {
        if(i%2!=0)
        {
            eFact=eFact*i;
        }
    
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo;i>=1;i--)
    {
        if(i%2==0)
        {
            oFact=oFact*i;
        }
    
    }
    factDiff=eFact-oFact;
    return factDiff;

}

int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    iRet=FactorialDiff(iValue);
    printf("Factoril difference of Number is:%d",iRet);

    return EXIT_SUCCESS;
}