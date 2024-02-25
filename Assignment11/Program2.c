////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 
// Problem Statement : Accept N no from user and return the Minimum
// no from array 
// Test Case : N: 6
//     Elements : 85 66 2 3 80 93 15 
//      Output  : 2      
// Date and Time : 4 May 19:30
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int FindMin(int* Arr,int iLength)
{
    int iCnt = 0;
    int iEvenCnt = 0;
    int iMin = *Arr;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {   
        if(iMin > *Arr)
        {
            iMin = *Arr;
        }
        Arr++;
    }
    return iMin;
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

    printf("Minimum no from Array:");
    iRet = FindMin(ptr,iSize);

    printf("%d",iRet);

    free(ptr);
    return 0;
}

