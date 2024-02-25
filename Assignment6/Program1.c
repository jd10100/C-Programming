////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 6
// Problem Statement : Write a Program which Accept no from user and  display its digit in reverse order  
// Input : 2395
// Output : 5   9   3   2
// Date and Time : 29 April 16:50
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>


void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)    
    
    {   iDigit = iNo % 10;

        printf("%d\n",iDigit);

        iNo = iNo / 10;
    }
}



int main()
{
    auto int iValue = 0;

    printf("Enter the no:");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}