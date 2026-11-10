#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CheckCharacterType
//  Description     :   it is cheak to charcter is uppercase,
//                      lowercase,digit, or Special charcter
//  Input           :   integer,character
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheckCharacterType(char cValue)
{
    if(cValue>=65 && cValue<=90)
    {
        printf("%c is Uppercase Alphabet",cValue);
    }
    else if(cValue>=97 && cValue<=123)
    {
        printf("%c its lowercase",cValue);
    }
    else if(cValue>=48 && cValue<=57)
    {
        printf("%c is Digit",cValue);
    }
    else
    {
        printf("%c is special Character",cValue);
    }
   
    
}
int main()
{
    char cValue='\0';

    printf("enter Character:");
    scanf("%c",&cValue);


   CheckCharacterType(cValue);
    return EXIT_SUCCESS;
}