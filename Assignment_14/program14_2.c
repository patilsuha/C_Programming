#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   FactRev
//  Description     :   it is use to print factors in decending order
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 void FactRev(int iNo)
{
  int i=0;
  for(i=iNo-1;i>=1;i--)
  {
    if(iNo%i==0)
    {
        printf("%d\t",i);
    }
  }
  
  
}
int main()
{
    int iValue=0;
    
    printf("enter number :");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}