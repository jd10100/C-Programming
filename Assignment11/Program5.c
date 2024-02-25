////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 11
// Problem Statement : Accept N no from user and 
// print sum of digits of each elemets in that array.
// Test Case : N: 6
//             No: 66
//     Elements : 15 66 3 70 10 88
//      Output  : 6 12 7 1 16
// Date and Time : 7 May 18:10
// Platform : Linux
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>


void DigitSum(int* Arr, int iLength)
{
    auto int iCnt = 0, iNo = 0, iSum = 0, iDigit = 0;
    for(iCnt=0; iCnt < iLength; iCnt++)
    {
        iNo = *(Arr+iCnt);
        iSum = 0;

        while(iNo > 0)
        {   
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10; 
        }

        printf("%d ",iSum);

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

    DigitSum(ptr,iSize);

    free(ptr);

    return 0;
}
