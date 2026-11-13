#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Display
//  Description     :   it is use to print pattern
//  Input           :   integer
//  Output          :   symbols
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
int DollerToINR(int iNo)
{
   int dValue=70;
   int INR=0;
   INR=dValue*iNo;
   return INR;

}

int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    iRet=DollerToINR(iValue);
    printf("value of INR is :%d",iRet);

    return EXIT_SUCCESS;
}