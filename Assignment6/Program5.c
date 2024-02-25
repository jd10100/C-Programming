////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 6
// Problem Statement : Write a Program which Accept no from user and  counts frequency of no which are less than 6
// Input : 23954
// Output : 4
// Date and Time : 30 April 23:50
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>
int Count(int iNo)
{   
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)    
    

    {   iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
}



int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the no:");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}