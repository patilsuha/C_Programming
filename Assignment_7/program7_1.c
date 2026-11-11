#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Pattern
//  Description     :   it is use to print pattern
//  Input           :   integer
//  Output          :   special character
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for( i=1;i<=iNo;i++)
    {
        printf("$\t");
        printf("*\t");
    }
   

    
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Pattern(iValue);

    return EXIT_SUCCESS;
}