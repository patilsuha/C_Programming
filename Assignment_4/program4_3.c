#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   FindGreater
//  Description     :   it is use to cheack to number 
//                      is   Greater
//  Input           :   integer,integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void FindGreater(int iFirst,int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("%d is a greater number",iFirst);
    }
    else
    {
        printf("%d is a greater number",iSecond);
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("enter first number:");
    scanf("%d",&iValue1);

    printf("enter  second number:");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);
    return EXIT_SUCCESS;
}