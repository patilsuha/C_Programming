#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////
//  Function Name   :   ChkGrater
//  Description     :   it is use to  find greter number
//  Input           :   int
//  Output          :   String
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
BOOL ChkGreter(int iNo)
{
   if(iNo>100)
   {
     return 1;
   }
   else
   {
    if(iNo==100)
    {
        printf("its equal to 100");
        exit(0);
    }
    return 0;
   }
    
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("enter number:");
    scanf("%d",&iValue);
    bRet=ChkGreter(iValue);
    if(bRet==1)
    {
        printf("it greater the 100.");
    }
    else
    {
        printf("it is smaller than 100");
    }

    
    return EXIT_SUCCESS;
}