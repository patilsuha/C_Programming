/*
   1    2   3   4
   5    6   7   8
   9    1   2   3   
   4    5   6   7
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
            printf("%d\t",iNum);
            if(iNum==9)
            {
                iNum=0;
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