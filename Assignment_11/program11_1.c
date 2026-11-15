#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   RangeDisplay
//  Description     :   it is use to number between 
//                      given stating and ending range
//  Input           :   int,int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   11/11/2026
//////////////////////////////////////////////////////////
void RangeDisplay(int iStart,int iEnd)
{
    int i=0;
    for(i=iStart;i<=iEnd;i++)
    {
        printf("%d\t",i);
    }
    
}

int main()
{
    int iValue1=0, iValue2=0;
   
    
    printf("enter starting point:");
    scanf("%d",&iValue1);

    printf("enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}