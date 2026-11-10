#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CheakLeapYear
//  Description     :   it is use to cheack year is leap year or not
//                      
//  Input           :   integer
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheackLeapYear(int iYear)
{
    if((iYear%400==0) || (iYear%4==0  &&  iYear%100 != 0))
    {
        printf("its leap year");
    }
    else
    {
        printf("its not leap year");
    }
    
    

}
int main()
{
    int iYear=0;

    printf("enter Year:");
    scanf("%d",&iYear);

    CheackLeapYear(iYear);
    return EXIT_SUCCESS;
}