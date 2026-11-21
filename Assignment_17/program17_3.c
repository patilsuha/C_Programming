/*
    a   b   c   d
    1   2   3   4
    a   b   c   d
  
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
    char ch='\0';
    
    for(i=1;i<=iRow;i++)
    {
        for(j=1,iNum=1,ch='a';j<=iCol;j++,iNum++,ch++)
        {
           if(i%2==0)
            {
                printf("%d\t",iNum); 
            }
            else
            {
                printf("%c\t",ch);
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