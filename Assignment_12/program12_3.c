#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CountTwo
//  Description     :   it is use to count frequency of 2Number given 
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int CountTwo(int iNo)
{
    int iDigit=0;
    int iCount=0;
    
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
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

    iRet=CountTwo(iValue);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}