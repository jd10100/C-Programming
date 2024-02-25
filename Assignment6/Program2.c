////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 6
// Problem Statement : Write a program which accept a no and checks whether it contains zero or not
// Input : 2395
// Output : it doesnt cotain zero
// Date and Time : 30 April 16:50
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Chkzero(int iNo)
{   
    BOOL bFlag = FALSE;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)    
    

    {   iDigit = iNo % 10;

        if(iDigit == 0)
        {
            bFlag = TRUE;
        }

        iNo = iNo / 10;
    }
    return bFlag;
}



int main()
{
    auto int iValue = 0;
    auto BOOL bRet = FALSE;

    printf("Enter the no:");
    scanf("%d",&iValue);

    bRet = Chkzero(iValue);

    if(bRet == TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("it Doesnt contain zero");
    }

    return 0;
}