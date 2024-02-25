////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 10
// Problem Statement : Accept N no from user and accept another no as No 
// LastOcc whether the no No present if present return last occurance index if not return -1 
// Test Case : N: 6
//             No: 66
//     Elements : 85 66 2 3 80 93 15 
//      Output  : 1  
// Test Case : N: 3
//          No: 11
//      Elements : 22 33 44 
//      Output  : -1
// Date and Time : 6 May 1:55
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>




int LastOcc(int[] , int, int);


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    
        return iCnt;

}




int main()
{
    int iSize = 0, iCnt = 0 , iValue = 0;
    int bRet = 0;
    int* ptr = NULL;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    printf("Enter the no No:");
    scanf("%d",&iValue);

    ptr =(int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        printf("Enter %dth element: ",(iCnt+1));
        scanf("%d",&ptr[iCnt]);
    }

    bRet = LastOcc(ptr,iSize,iValue);

    printf("%d",bRet);

    free(ptr);

    return 0;
}

