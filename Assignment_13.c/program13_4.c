#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   OddCount
//  Description     :   it is use to count frequency of Odd Digit
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int MultDigit(int iNo)
{
    int iDigit=0;
    int iMulti=1;
    
    while (iNo!=0)
    {
        iDigit=iNo%10;
        iMulti=iDigit*iMulti;
        iNo=iNo/10;
    }
    return iMulti;
}

int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter number :");
    scanf("%d",&iValue);

    iRet=MultDigit(iValue);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}