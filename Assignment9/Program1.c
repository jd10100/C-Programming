////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 9
// Problem Statement : Accept N no from user and return the frequency
// of even no 
// Test Case : N: 6
//     Elements : 85 66 2 3 80 93 15 
//      Output  : 3       
// Date and Time : 4 May 17:42
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int CountEven(int* Arr,int iLength)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {   
        if(*Arr % 2 == 0)
        {
            iEvenCnt++;
        }
        Arr++;
    }
    return iEvenCnt;
}



int main()
{
    auto int iSize = 0;
    register int iCnt = 0;
    auto int *ptr = NULL;
    auto int iRet = 0;

    printf("Enter the number of element: \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",(ptr+iCnt));
    

    }

    iRet = CountEven(ptr,iSize);

    printf("%d",iRet);

    free(ptr);
    return 0;
}

