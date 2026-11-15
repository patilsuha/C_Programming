#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   RangeDisplay
//  Description     :   it is use to  print reverse numbers of given range
//  Input           :   int,int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 void RangeDisplay(int iStart,int iEnd)
{
    int i=0;
    if(iEnd<iStart)
    {
        printf("invalid range");
        exit(0);
    }
    
    for(i=iEnd;i>=iStart;i--)
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