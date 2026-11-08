#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
/////////////////////////////////////////////////////////
//  Function Name   :   Cheakvowel
//  Description     :   it is use to cheack character is vowel or not
//  Input           :   character
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   7/11/2026
//////////////////////////////////////////////////////////
BOOL CheakVowel(char cValue)
{
    if((cValue=='a')||(cValue=='e')||(cValue=='i')||(cValue=='o')||(cValue=='u'))
    {
      return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int cValue='\0';
    BOOL bRet=FALSE;
    printf("ENTER SMALL CHARACTER:");
    scanf("%c",&cValue);

    bRet=CheakVowel(cValue);
    if(bRet==1)
    {
        printf("its Vowel");
    }
    else
    {
        printf("its not vowel");
    }
    

    return 0;
}