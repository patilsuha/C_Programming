#include<stdio.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Accept
//  Description     :   it is use perform  print 5 star on screen
//  Input           :   int
//  Output          :   *
//  Author          :   Suhani Patil
//  Date            :   3/11/2026
//////////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("* \t");
    }
}
int main()
{
    int iValue=0;
    iValue=5;
    Accept(iValue);
    return 0;
}
