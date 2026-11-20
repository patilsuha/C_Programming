#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//  Function Name   :   Addition
//  Description     :   perform addition
//  Input           :   integer,integer
//  Output          :   integer
//  Author          :   Suhani Patil
//  Date            :   3/11/2026
////////////////////////////////////////////////////////////////////////////

int Addition
(
    int iNo1,
    int iNo2
)
{
   int iAns=0;
   iAns=iNo1+iNo2;
   return iAns;
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 =0, iValue2=0, iResult =0;

    printf("enter the first number:\n");
    if(scanf("%d",&iValue1) != 1)
    {
       
        fprintf(stderr,"unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
      
    }
    printf("enter second number:\n");

    if (scanf("%d",& iValue2) != 1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }
    iResult=Addition(iValue1,iValue2);
    printf("Addition is : %d\n", iResult);
   
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////
//
//  step 5  :   Test the program
//
//  Tested tesp cases
//-------------------------------------------------------------------------------
//      Input1                    Input2                       Output
//-------------------------------------------------------------------------------
//      10                          11                            21
//      11                          0                             11
//      0                           11                            11
//      20                          -9                            11
//      -9                          20                            11
//      -20                         -11                           -31
//-------------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////