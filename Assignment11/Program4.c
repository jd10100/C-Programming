////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 11
// Problem Statement : Accept N no from user and 
// print number which contain 3 digits
// Test Case : N: 6
//             No: 66
//     Elements : 15 66 3 70 105 888
//      Output  : 105 888
// Date and Time : 7 May 18:10
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>


void Digit(int *Arr,int iLength)
{
    auto int iCnt = 0;
    auto int iDigit = 0;
    auto int iNo = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {   
        iDigit = 0;
        iNo = *(Arr + iCnt);
        while(iNo > 0)
        {
            iDigit++;

            iNo = iNo /10;

        }

        if(iDigit == 3)
        {
            printf("%d ",*(Arr + iCnt));
        }
        

    }

}


int main()
{
    auto int iSize = 0, iCnt = 0;
    auto int* ptr = NULL;

    printf("Enter the size of array : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the %dst element: ",(iCnt+1));
        scanf("%d",ptr+iCnt);

    }

    Digit(ptr,iSize);

    free(ptr);

    return 0;
}