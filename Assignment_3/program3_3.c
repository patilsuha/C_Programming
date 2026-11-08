#include<stdio.h>
////////////////////////////////////////////////////////
//  Function Name   :   DisplayFactor
//  Description     :   it is use to diplay  factors of number
//  Input           :   int
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   17/11/2026
//////////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if((iNo%i==0)&&(i % 2==0))
        {
            printf("%d\t",i);
        }
        
    }
    

}
int main()
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}