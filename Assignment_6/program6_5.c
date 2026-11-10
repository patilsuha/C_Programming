#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CalculateBonus
//  Description     :   it is use to calculate employee bonus
//  Input           :   integer,float
//  Output          :   float
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CalculateBonus(float fSalary, int iYears)
{
    float fBonus=0.0f;
    if(iYears>10)
    {
        fBonus=fSalary* 15/100;
    }
    else if(iYears>=5 && iYears<=10)
    {
        fBonus=fSalary* 10/100;
    }
    else
    {
        fBonus=fSalary* 5/100;
    }
    printf("bonus = %f",fBonus);

    
}
int main()
{
    float fSalary=0.0f;
    int iYears=0;
    printf("enter salary and years of service:");
    scanf("%f %d",&fSalary,&iYears);
    CalculateBonus(fSalary,iYears);


    return EXIT_SUCCESS;
}