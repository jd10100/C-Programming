////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 8
// Problem Statement : Accept N no from user and print numbers
// which are even and divisible by 5
// Test Case : N: 6
//     Elements : 85 66 2 3 80 93 88 
//      Output  : 80       
// Date and Time : 4 May 01:10
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 2 == 0)
        {
            printf("%d ",Arr[iCnt]);
        }     
    }
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

    Display(ptr,iSize);

    free(ptr);
    return 0;
}