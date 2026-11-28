#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   strlwrx
//  Description     :   it is use to print string in uppercase
//  Input           :   string
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 void strlwrx(char *str)
{
    int i=0;
    while (str[i] != '\0')
    {
       if(str[i]>='A' && str[i]<='Z')
         {
              str[i]=str[i]+32;
              
         }
         i++;
    }
    
    
    printf("%s",str);
    
}
int main()
{
    char arr[20];
    printf("enter string:");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);
    printf("modified string is %s",arr);
   
    return EXIT_SUCCESS;
}