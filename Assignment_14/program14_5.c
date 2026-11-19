#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   FactDiff
//  Description     :   it is use to print difference between factors and non-Factors
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int FactDiff(int iNo)
{
  int i=0;
  int EvenSum=0, OddSum=0, Diff=0;
  for(i=1;i<iNo;i++)
  {
    if(iNo%i==0)
    {
        EvenSum=EvenSum+i;
    }
    else
    {
        OddSum=OddSum+i;
    }
  }
  Diff=EvenSum-OddSum;
  return Diff;
  
  
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter number :");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("Summetion is %d",iRet);

    return EXIT_SUCCESS;
}