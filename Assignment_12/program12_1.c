#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   DisplayDigit
//  Description     :   it is use to  print reverse Digit of given Number
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 void DisplayDigit(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
    

}

int main()
{
    int iValue=0;
    
    printf("enter number:");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    return EXIT_SUCCESS;
}