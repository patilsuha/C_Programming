#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :    CheakAdmission
//  Description     :   it is use to cheack eligible for addimission or not
//  Input           :   integer,float
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheakAdmission(float fMarks,int iAge)
{
    if(iAge<=0 && fMarks<=0)
    {
        printf("its invalid input");
    }
    else if((iAge>=17) && (fMarks>=60))
    {
        printf("eligible for admission");
    }
    else
    {
        printf("not eligible for admission");
    }
   
}
int main()
{
    int iAge=0;
    float fMarks=0.0f;

    printf("enter marks and age:");
    scanf("%d %f",&iAge,&fMarks);
    CheakAdmission(iAge,fMarks);


    return EXIT_SUCCESS;
}