////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 10
// Problem Statement : Accept N no from user and 
// return product of odd no
// Test Case : N: 6
//             No: 66
//     Elements : 15 66 3 70 10 88
//      Output  : 45
 // Test Case : N: 6
//             No: 66
//     Elements : 44 66 72 70 10 88 
//      Output  : 0
// Date and Time : 6 May 1:55
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>




int Product(int[] , int, int);


int Product(int Arr[], int iLength, int iNo)
{
    int iCnt = 0; 
    int iProOdd = 1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProOdd = iProOdd * Arr[iCnt];
        }
    }

    if(iProOdd == 1)
    {
        return 0;
    }
    else
    {
        return iProOdd;
    }
}




int main()
{
    int iSize = 0, iCnt = 0 , iValue = 0;
    int iRet = 0;
    int* ptr = NULL;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);


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

    iRet = Product(ptr,iSize,iValue);

    printf("%d",iRet);

    free(ptr);

    return 0;
}

