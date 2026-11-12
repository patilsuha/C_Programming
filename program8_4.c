#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Table
//  Description     :   it is use to print table
//  Input           :   integer
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void Table(int iNo)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",iNo*i);
    }
   
}

int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Table(iValue);

    return EXIT_SUCCESS;
}