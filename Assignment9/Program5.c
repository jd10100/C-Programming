////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 9
// Problem Statement : Accept N no from user and return difference between frequency
// of even and odd no 
// Test Case : N: 6
//     Elements : 85 66 2 3 80 93 15 
//      Output  : 1 (4-3)       
// Date and Time : 5 May 1:23
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int[] , int , int);


int Frequency(int Arr[],int iLength, int iNo)
{   
    auto int iDiff = 0, iCnt = 0;
    auto int iNoCnt = 0, iOddCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iNoCnt++;
        }
    }


    return iNoCnt;
}




int main()
{
    auto int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    auto int* ptr = NULL;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    printf("Enter the number: ");
    scanf("%d",&iValue);

    ptr =(int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allcate the memory");
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        printf("Enter %dth element: ",(iCnt+1));
        scanf("%d",&ptr[iCnt]);
    }

   
    iRet = Frequency(ptr,iSize,iValue);

    printf("%d",iRet);

    return 0;
}

