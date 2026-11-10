#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CalculateElectricityBill
//  Description     :   it is use to cheack electricity
//  Input           :   integer
//  Output          :   float
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CalculateElectricityBill(int iUnits)
{
    float fBill=0.0f;
    if(iUnits<=0)
    {
        printf("intvalid units");
    }
    else if(iUnits<=100)
    {
        fBill=iUnits*5;
    }
    else if ( iUnits<=200)
    {
        fBill=((100*5) + ((iUnits - 100) * 7));
    }
    else
    {
        fBill=((100*5)+(100*7)+((iUnits-200) * 10));
    }
    printf("Bill=%f\n",fBill);
}
int main()
{
    int iUnits=0;
   

    printf("enter Consumed units:");
    scanf("%d",&iUnits);
    CalculateElectricityBill(iUnits);


    return EXIT_SUCCESS;
}