#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   iMultFact
//  Description     :   it is use to return multiplication of factors
//  Input           :   int
//  Output          :   integers
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int MultFact(int iNo)
{
  int iMult=1;
  int i=0;
  for(i=1;i<iNo;i++)
  {
    if(iNo%i==0)
    {
        printf("%d\t",i);
        iMult=iMult*i;
    }
  }
  return iMult;
  
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter number :");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("\n%d",iRet);
    return EXIT_SUCCESS;
}