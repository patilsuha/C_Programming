#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CalculateDiscount 
//  Description     :   it is use to calculate discount
//  Input           :   float
//  Output          :   float
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CalculateDiscount(float fAmount)
{
    float fDiscount=0.0f;
    float fFinalAmount=0.0f;
    if(fAmount<=0)
    {
        printf("its invalid input");
    }
    else if(fAmount<=1000)
    {
        fDiscount=fAmount*0/100;
        fFinalAmount=fAmount-fDiscount;   
    }
    else if(fAmount>1000 && fAmount<=5000)
    {
        fDiscount=fAmount*10/100;
        fFinalAmount=fAmount-fDiscount;
    }
    else
    {
        fDiscount=fAmount*20/100;
        fFinalAmount=fAmount-fDiscount;
    }
    if(fAmount>0)
    {
        printf("payable Amount %f",fFinalAmount);
    }
}
int main()
{
    float fAmount=0.0f;

    printf("enter purchase amount:");
    scanf("%f",&fAmount);
    CalculateDiscount(fAmount);


    return EXIT_SUCCESS;
}