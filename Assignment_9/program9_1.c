#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Display
//  Description     :   it is use to print pattern
//  Input           :   integer
//  Output          :   symbols
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void Display(int iNo)
{
    /*for(int i=1;i<=iNo;i++)
    {
        printf("*\t");
    }
    for(int i=1;i<=iNo;i++)
    {
        printf("#\t");
    }
    */

    for(int i=1;i<=iNo*2;i++)
    {
        if(i<=iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
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