////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 12
// Problem Statement : Accept N no from user and print the pattern
// 
// Test Case : N: 5
//     Elements : 5
//      Output  : 2   4   6   8   10  
// Date and Time : 16 May 19:30
// Platform : Linux
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    
    int iCnt = 0;
    int iAns = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {

        iAns = iAns + 2;
        printf("%d ",iAns);

    }
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter no of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}