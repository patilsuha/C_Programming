#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   SumNonFact
//  Description     :   it is use to print factors in decending order
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int SumNonFact(int iNo)
{
  int i=0;
  int iSum=0;
  for(i=1;i<=iNo;i++)
  {
    if(iNo%i!=0)
    {
        iSum=iSum+i;
    }
  }
  return iSum;
  
  
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter number :");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    printf("Summetion is %d",iRet);

    return EXIT_SUCCESS;
}