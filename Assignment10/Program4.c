////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 10
// Problem Statement : Accept N no from user and accept range and
// display all numbers within the range which are present in array 
// Test Case : N: 6
//             start: 60
//              end: 90
//     Elements : 85 66 2 3 80 93 15 
//      Output  : 85 66 80  
// Test Case : N: 3
//          start: 5
//            end: 20
//      Elements : 22 33 44 
//      Output  :  
// Date and Time : 6 May 2:27
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>




int Range(int[] , int, int, int);


int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]>= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ",Arr[iCnt]);
        }
    }

        return iCnt;

}




int main()
{
    int iSize = 0, iCnt = 0 , iValue1 = 0, iValue2 = 0;
    int* ptr = NULL;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    printf("Enter the Start No:");
    scanf("%d",&iValue1);

    printf("Enter the end No:");
    scanf("%d",&iValue2);


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

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);

    return 0;
}

