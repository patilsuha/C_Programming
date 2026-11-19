#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////
//  Function Name   :   ChkEql
//  Description     :   it is use to  cheak number are equal or not
//  Input           :   int
//  Output          :   String
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
BOOL ChkEql(int iNo1, int iNo2)
{
   if(iNo1==iNo2)
   {
     return 1;
   }
   else
   {
    return 0;
   }
    
}

int main()
{
    int iValue1=0 , iValue2=0;
    BOOL bRet=FALSE;
    printf("enter number:");
    scanf("%d",&iValue1);

    printf("enter number:");
    scanf("%d",&iValue2);

    bRet=ChkEql(iValue1,iValue2);
    if(bRet==1)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    
    return EXIT_SUCCESS;
}