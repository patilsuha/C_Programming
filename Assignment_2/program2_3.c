#include<stdio.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Display
//  Description     :   it is use perform if number is small than 10
//                      to print "Hello" or greter than 10 to print "Demo"
//  Input           :   int
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   7/11/2026
//////////////////////////////////////////////////////////
void Diaplay(int iNo)
{
   if(iNo<10)
   {
    printf("Hello");

   }
   else
   {
    printf("Demo");
   }
    
}
int main()
{
    int iValue=0;

    printf("enter number:");
    scanf("%d", & iValue);

    Diaplay(iValue);

    return 0;
}
