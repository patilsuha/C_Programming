#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   Number
//  Description     :   it is use to print number into string
//  Input           :   integer
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
void Number(int iNo)
{
    switch (iNo)
    {
    case 0:
        printf("zero");
        break;
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    default:
        printf("its default value");
        break;
    }
}

int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Number(iValue);

    return EXIT_SUCCESS;
}