////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 9
// Problem Statement : Accept N no from user and accept another no as No 
// Check whether the no No present in array  
// Test Case : N: 6
//             No: 66
//     Elements : 85 66 2 3 80 93 15 
//      Output  : True       
// Date and Time : 5 May 1:23
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1 
#define FALSE 0 


BOOL Check(int[] , int, int);


BOOL Check(int Arr[], int iLength, int iNo)
{
    BOOL bFlag = FALSE;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}




int main()
{
    int iSize = 0, iCnt = 0 , iValue = 0;
    BOOL bRet = FALSE;
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

    bRet = Check(ptr,iSize,iValue);


    if(bRet == TRUE)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    free(ptr);

    return 0;
}

