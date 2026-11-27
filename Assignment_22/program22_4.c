/*
    5   *   #   4   *   #   3   *   #   2   *   #   1
  
*/
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Pattern
//  Description     :   it is use to print pattern
//  Input           :   int
//  Output          :   pattern
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 void Pattern(int iNo)
{
    int i=0;
   
    for(i=1;i<=iNo;i++)
    {
      printf("%d\t*\t#\t",i);
    }
    
}
int main()
{
    int iValue=0;
    printf("enter numbers of elment:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}