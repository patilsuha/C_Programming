#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   FactRev
//  Description     :   it is use to print non factors in  order
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 void FactRev(int iNo)
{
  int i=0;
  for(i=1;i<=iNo;i++)
  {
    if(iNo%i!=0)
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