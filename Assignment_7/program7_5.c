#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   MultipleDisplay
//  Description     :   it is use to print multiple of number
//  Input           :   integer
//  Output          :   number
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int i=0;
   
    for(i=1;i<=5;i++)
    {  
        printf("%d",i*iNo);
        printf("\t"); 
        
    }
   

    
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}