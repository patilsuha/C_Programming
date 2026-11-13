#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   EvenFactorial
//  Description     :   it is use to print even factorial of number
//  Input           :   integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
int EvenFactorial(int iNo)
{
  
    int i=0;
    int Fact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
            Fact=Fact*i;
        }
    
    }
    return Fact;

}

int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf("\nEven Factoril of Number is:%d",iRet);

    return EXIT_SUCCESS;
}