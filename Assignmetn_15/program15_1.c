#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   -
//  Description     :   it is use to print string
//  Input           :   string
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////

int main()
{
    char Name[30];
    printf("plese enter full name:\n");
    scanf("%[^'\n']s",&Name);
    printf("your name is %s",Name);
    return 0;
}
