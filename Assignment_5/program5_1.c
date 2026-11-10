#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   FindGreatest
//  Description     :   it is use to cheack greatest number out of 3
//  Input           :   integer,integer,integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void FindGreatest(int iFirst, int iSecond ,int iThird)
{
    if (iFirst>iSecond && iFirst>iThird)
    {
        printf("%d is greter number.",iFirst);
    }
    if (iSecond>iFirst && iSecond>iThird)
    {
        printf("%d is greater number.",iSecond);
    }
    if (iThird>iSecond && iThird>iFirst)
    {
        printf("%d is  greater.",iThird);
    }
    

}
int main()
{
    int iValue1=0, iValue2=0, iValue3=0;

    printf("enter three numbers:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);
    return EXIT_SUCCESS;
}
