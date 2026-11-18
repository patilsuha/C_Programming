#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CountRange
//  Description     :   it is use to count frequency of bitween Digit 3 & 7
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int CountRange(int iNo)
{
    int iDigit=0;
    int iCount=0;
    
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if( iDigit>3 && iDigit<7 )
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter number :");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}