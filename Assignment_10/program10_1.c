#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CircleArea
//  Description     :   it is use to calculate aria of circle
//  Input           :   float
//  Output          :   double
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
double CircleArea(float fRadious)
{
  
    float pi=3.14;
    double dAria=0.0;
    dAria=pi*fRadious*fRadious;
    return dAria;

}

int main()
{
    float fValue=0.0f;
    double dRet=0.0;
    
    printf("enter radious:");
    scanf("%f",&fValue);
    
    dRet=CircleArea(fValue);
    printf("aria of circle is:%lf:",dRet);

    return EXIT_SUCCESS;
}