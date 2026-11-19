#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Multiply
//  Description     :   it is use to print multiplication of 3 numbers
//  Input           :   int,int,int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int Multiply(int iNo1,int iNo2, int iNo3)
{
    int iMult=1;
    if(iNo1==0)
    {
        iNo1=1;
    }
    if (iNo2==0)
    {
        iNo2=1;
    }
    if(iNo3==0)
    {
        iNo3=1;
    }
    iMult=iNo1*iNo2*iNo3;
    return iMult;
  
}
int main()
{
    int iValue1=0 , iValue2=0 , iValue3=0;
    int iRet=0;
    
    printf("enter 1 number :");
    scanf("%d",&iValue1);

    printf("enter 2 number :");
    scanf("%d",&iValue2);

    printf("enter 3 number :");
    scanf("%d",&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is %d",iRet);

    return EXIT_SUCCESS;
}