////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 9
// Problem Statement : Accept N no from user and return 
//  count of 11 
// Test Case : N: 6
//     Elements : 85 66 2 3 80 93 11 
//      Output  : 1        
// Date and Time : 5 May 2:04
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int[] , int);


int Frequency(int Arr[],int iLength)
{   
    auto int iCnt = 0;
    auto int iElevenCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iElevenCnt++;
        }
    } 

    return iElevenCnt;
}




int main()
{
    auto int iSize = 0, iCnt = 0, iRet = 0;
    auto int* ptr = NULL;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    ptr =(int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        printf("Enter %dth element: ",(iCnt+1));
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iSize);

    printf("%d",iRet);

    return 0;
}

