///////////////////////////////////////////////////////////
//Accept a no from the user and print whether the no is odd or even
//
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }

}




int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == FALSE)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }

    return 0;
}