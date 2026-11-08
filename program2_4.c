#include<stdio.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Dispaly
//  Description     :   it is use to dispaly first number 
//                      in second number of times 
//  Input           :   int,int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   7/11/2026
//////////////////////////////////////////////////////////
void Display(int iNo, int iFrequency)
{
    int i=0;
    for(i=0  ; i < iFrequency ; i++)
    {
        printf("%d \t",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("enter the number:");
    scanf("%d",&iValue);

    printf("enter the frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}