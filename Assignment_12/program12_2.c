#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////
//  Function Name   :   ChkZero
//  Description     :   it is use to  print reverse Digit of given Number
//  Input           :   int
//  Output          :   String
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
BOOL ChkZero(int iNo)
{
    int iDigit=0;

    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return 1;
        }
        iNo=iNo/10;
    }
    
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("enter number:");
    scanf("%d",&iValue);
    bRet=ChkZero(iValue);
    if(bRet==1)
    {
        printf("it contains zero.");
    }
    else
    {
        printf("there is no zero");
    }

    
    return EXIT_SUCCESS;
}