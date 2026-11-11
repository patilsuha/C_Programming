#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   OddDisplay
//  Description     :   it is use to print odd number
//  Input           :   integer
//  Output          :   number
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int i=0;
   
    for(i=1;i<=iNo;i++)
    {  
        printf("%d",i);
        printf("\t"); 
        i++;
    }
   

    
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    OddDisplay(iValue);

    return EXIT_SUCCESS;
}