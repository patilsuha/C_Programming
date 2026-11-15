#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :  RangeDisplayEven 
//  Description     :   it is use to even number between 
//                      given stating and ending range
//  Input           :   int,int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart,int iEnd)
{
    int i=0;
    for(i=iStart;i<=iEnd;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    
}

int main()
{
    int iValue1=0, iValue2=0;
   
    
    printf("enter starting point:");
    scanf("%d",&iValue1);

    printf("enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}