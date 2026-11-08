#include<stdio.h>
////////////////////////////////////////////////////////
//  Function Name   :   PrintEven
//  Description     :   it is use to diplay even number
//  Input           :   int
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   7/11/2026
//////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        return;
    }
    for(i=1;i<=iNo;i++)
    {
        printf("%d\t",i*2);
        
    }
    

}
int main()
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}
