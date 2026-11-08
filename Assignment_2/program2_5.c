#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
/////////////////////////////////////////////////////////
//  Function Name   :   CheakEven
//  Description     :   it is use to cheack number is even or odd
//  Input           :   int
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   7/11/2026
//////////////////////////////////////////////////////////
BOOL CheakEven(int iNo)
{
    if((iNo % 2)==0)
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
    printf("ENTER NUMBER:");
    scanf("%d",&iValue);

    bRet=CheakEven(iValue);
    if(bRet==1)
    {
        printf("%d is event number",iValue);
    }
    else
    {
        printf("%d is odd number",iValue);
    }
    

    return 0;
}