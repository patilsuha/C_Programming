#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   FhtoCs
//  Description     :   it is use to convert fahrenheit to celcious
//  Input           :   float
//  Output          :   double
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
double FhtoCs(float fTemp)
{
    double dCelsius=0.0;
    dCelsius=((fTemp-32)*5/9);
  
    return dCelsius;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;
    
    printf("enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("temperature in celcious is:%lf:",dRet);

    return EXIT_SUCCESS;
}