
#include<stdio.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Display
//  Description     :   it is use perform  print star on screen
//  Input           :   int
//  Output          :   *
//  Author          :   Suhani Patil
//  Date            :   7/11/2026
//////////////////////////////////////////////////////////
void Diaplay(int iNo)
{
    int iCnt=0;
    while (iNo>iCnt)
    {
        printf(" * ");
        iNo--;
    }
    
}
int main()
{
    int iValue=0;

    printf("enter number:");
    scanf("%d", & iValue);

    Diaplay(iValue);

    return 0;
}
