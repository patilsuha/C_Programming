#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Number
//  Description     :   it is use to print number is large,small or medium
//  Input           :   integer
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void Number(int iNo)
{
    if(iNo<=0)
    {
        printf("invalid number");
    }
    else if(iNo<=50)
    {
        printf("its small number");
    }
    else if(iNo<=100)
    {
        printf("its medium number");
    }
    else
    {
        printf("its large number");
    }   
}

int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Number(iValue);

    return EXIT_SUCCESS;
}