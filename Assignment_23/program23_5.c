#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   WhiteSpace
//  Description     :   it is use to count white spaces
//  Input           :   string
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   10/11/2026
//////////////////////////////////////////////////////////
 int Whitspace(char *str)
{
    int i=0 ,iCount=0;
    while (str[i] != '\0')
    {
       if(str[i]==' ')
         {
              
              iCount++;
         }
         
         i++;
    }
    return iCount;
    
    
}
int main()
{
    char arr[20];
    printf("enter string:");
    scanf("%[^'\n']s",arr);

    
    printf("white spaces is:%d", Whitspace(arr));
   
    return EXIT_SUCCESS;
}