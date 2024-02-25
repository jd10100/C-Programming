////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 8
// Problem Statement : Accept N no from user and return the
// difference between summation of even no an odd no
// Test Case : N: 6
//     Elements : 85 66 2 3 80 93 88 
//      Output  : 53 (234 - 181)        
// Date and Time : 4 May 00:46
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[],int iLength)
{
    int iDiff = 0, iEven = 0, iOdd = 0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }

    iDiff = iEven - iOdd;

    return iDiff;
}



int main()
{   
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr =(int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);

    printf("Result is %d",iRet);

    free(ptr);
    return 0;
}