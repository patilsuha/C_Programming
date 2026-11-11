#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Display
//  Description     :   it is use to print number
//  Input           :   integer
//  Output          :   number
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void Display(int iNo)
{
    int i=0;
   
    for( i=1;i<=iNo;i++)
    {
        printf("%d",i);
        printf("\t");
        
    }
   

    
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Display(iValue);

    return EXIT_SUCCESS;
}