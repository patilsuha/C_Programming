#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   percentage
//  Description     :   it is use to calculate percentage
//  Input           :   int,int
//  Output          :   float
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 float percentage(int iTotMarks,int iObtMarks)
{
    float fPercentage=0.0f;
    fPercentage=((float)iObtMarks/(float)iTotMarks)*100;
    return fPercentage;
  
}
int main()
{
    int iValue1=0 , iValue2=0;
    float fRet=0.0f;
    
    printf("enter total marks :");
    scanf("%d",&iValue1);

    printf("enter obtained marks :");
    scanf("%d",&iValue2);

    fRet=percentage(iValue1,iValue2);
    printf("percentage is  %f",fRet);

    return EXIT_SUCCESS;
}