#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////
//  Function Name   :   Check
//  Description     :   it is use display number is divisible by 5 or not
//  Input           :   int
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   3/11/2026
//////////////////////////////////////////////////////////
int Check(int iNo)
{
    if((iNo % 5)==0)
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
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet=Check(iValue);
    if(bRet==TRUE)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return 0;
}
