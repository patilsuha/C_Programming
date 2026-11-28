#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   strlwrx
//  Description     :   it is use to print string in digits
//  Input           :   string
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 void DisplayDigit(char *str)
{
    int i=0 ,j=0;
    while (str[i] != '\0')
    {
       if(str[i]>=48 && str[i]<=57)
         {
              
              str[j]=str[i];
              j++;
         }
         
         i++;
    }
    str[j]='\0';
    
    
}
int main()
{
    char arr[20];
    printf("enter string:");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);
    printf("modified string is %s",arr);
   
    return EXIT_SUCCESS;
}