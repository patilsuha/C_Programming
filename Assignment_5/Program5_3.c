#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CheakLeapYear
//  Description     :   it is use to cheack year is leap year or not
//                      
//  Input           :   integer
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void DisplayMarks(float fMarks)
{
    if(fMarks>=90 && fMarks<=100)
    {
        printf("Grade A -> congratulation you are pass");
    }
    else if(fMarks>=75 && fMarks<=89)
    {
        printf("Grade B -> congratulation you are pass");
    }
    else if(fMarks>=60 && fMarks<=74)
    {
        printf("Grade C -> congratulation you are pass");
    }
    else if(fMarks>=40 && fMarks<=59)
    {
        printf("Grade D -> congratulation you are pass");
    }
    else if(fMarks>=1 && fMarks<=40)
    {
        printf("Sorry you are Fail");
    }
    else
    {
        printf("invalid Marks");
    }
}
int main()
{
    float fMarks=0.0f;

    printf("enter your marks:");
    scanf("%f",&fMarks);

    DisplayMarks(fMarks);
    return EXIT_SUCCESS;
}