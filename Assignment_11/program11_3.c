#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   RangeSum
//  Description     :   it is use to  print sum of numbers
//  Input           :   int,int
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int RangeSum(int iStart,int iEnd)
{
    int i=0;
    int iSum=0;
    if((iStart<0) || (iEnd<0) || (iEnd<=iStart))
    {
        printf("invalid range");
        exit(0);
    }
    
    for(i=iStart;i<=iEnd;i++)
    {
            iSum=iSum+i;
    }

    return iSum;
}

int main()
{
    int iValue1=0, iValue2=0;
    int iRet=0;
    
    printf("enter starting point:");
    scanf("%d",&iValue1);

    printf("enter ending point:");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);
    printf("sum is:%d",iRet);

    return EXIT_SUCCESS;
}