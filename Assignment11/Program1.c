////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 
// Problem Statement : Accept N no from user and return the maximum
// no from array 
// Test Case : N: 6
//     Elements : 85 66 2 3 80 93 15 
//      Output  : 93       
// Date and Time : 4 May 19:30
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int FindMax(int* Arr,int iLength)
{
    int iCnt = 0;
    int iEvenCnt = 0;
    int iMax = *Arr;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {   
        if(iMax < *Arr)
        {
            iMax = *Arr;
        }
        Arr++;
    }
    return iMax;
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

    printf("Maximum no from Array:");
    iRet = FindMax(ptr,iSize);

    printf("%d",iRet);

    free(ptr);
    return 0;
}

