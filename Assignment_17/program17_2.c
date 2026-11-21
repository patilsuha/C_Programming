/*
   //input=5
   input=10
  
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
 void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    int iNum=1;
    
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++,iNum++)
        {
            if(i%2!=0 && j%2==0)
            {
                printf("\t%d",j);
            }
            if(i % 2 == 0 && j % 2 != 0)
            {
                printf("\t%d",j);
            }
            
        }
        printf("\n\n");
    }
    
}
int main()
{
    int iValue1=0 , iValue2=0;
    printf("enter numbers of rows and column and columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}