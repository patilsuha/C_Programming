#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   KMtoMeater
//  Description     :   it is use to calculat kilometer into meter
//  Input           :   integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
int KMtoMeater(int iNo)
{

    int ikiloMeter=1000;
    int iMeter=iNo*ikiloMeter;
    return iMeter;
    

}

int main()
{
    int iValue=0,iRet=0;
    printf("enter distance in kilometer:");
    scanf("%d",&iValue);

    iRet=KMtoMeater(iValue);
    printf("meters is:%d",iRet);

    return EXIT_SUCCESS;
}