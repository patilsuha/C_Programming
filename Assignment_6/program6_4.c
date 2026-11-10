#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//  Function Name   :   CheackTriangel 
//  Description     :   it is use to cheack triangle is valid or not
//  Input           :   integer,integer,integer
//  Output          :   string
//  Author          :   Suhani Patil
//  Date            :   9/11/2026
//////////////////////////////////////////////////////////
void CheackTriangel(int iSide1 , int iSide2, int iSide3)
{
    if(iSide2<=0 || iSide1<=0 || iSide3<=0)
    {
        printf("invalid input");
    }
    else if(iSide1<(iSide2+iSide3) && iSide2<(iSide3+iSide1) && iSide3<(iSide2+iSide1))
    {
        printf("its valid Triangle");
    }
    else
    {
        printf("its invalid Triange");
    }

    
}
int main()
{
    int iSide1=0,iSide2=0,iSide3=0;
    printf("enter three sides:");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);
    CheackTriangel(iSide1,iSide2,iSide3);


    return EXIT_SUCCESS;
}