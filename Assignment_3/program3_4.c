#include<stdio.h>
////////////////////////////////////////////////////////
//  Function Name   :   DisplayCover
//  Description     :   it is use to convert capital character to small character
//  Input           :   character
//  Output          :   character
//  Author          :   Suhani Patil
//  Date            :   17/11/2026
//////////////////////////////////////////////////////////
void DisplayCover(int cValue)
{
    if(cValue>=65 && cValue<=90)
    {
        printf("%c\n",cValue+32);

    }
    else if(cValue>=97 && cValue<=123)
    {
        printf("%c\n",cValue-32);
    }
    

}
int main()
{
    int cValue='\0';
    printf("enter character\n");
    scanf("%c",&cValue);
    DisplayCover(cValue);
    return 0;
}