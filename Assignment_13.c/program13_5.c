#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CountDiff
//  Description     :   it is use to find difference between
//                      odd number sum and even number sum
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int CountDiff(int iNo)
{
    int iDigit=0;
    int iSum=0;
    int iEvenSum=0;
    int iOddSum=0;
    
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if( iDigit % 2==0 )
        {
           iEvenSum=iEvenSum+iDigit;
        }
        else
        {
            iOddSum=iOddSum+iDigit;
        }
        iNo=iNo/10;
    }
    iSum=iEvenSum-iOddSum;
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter number :");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}