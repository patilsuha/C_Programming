#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   RectAria
//  Description     :   it is use to calculat area of rectangle
//  Input           :   float
//  Output          :   double
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
double RectAria(float fWidth, float fHight)
{

    double dAria=0.0;
    dAria=fWidth*fHight;
    return dAria;

}

int main()
{
    float fValue1=0.0f,fValue2=0.0f;
    double dRet=0.0;
    
    printf("enter width:");
    scanf("%f",&fValue1);

    printf("enter hight:");
    scanf("%f",&fValue2);
    
    dRet=RectAria(fValue1,fValue2);
    printf("aria of rectangle is:%lf:",dRet);

    return EXIT_SUCCESS;
}