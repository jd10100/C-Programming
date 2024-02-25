////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 6
// Problem Statement : Write a Program which Accept no from user and  counts frequency of no 2
// Input : 2395
// Output : 5   9   3   2
// Date and Time : 30 April 16:50
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>
int CountTwo(int iNo)
{   
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)    
    

    {   iDigit = iNo % 10;

        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}