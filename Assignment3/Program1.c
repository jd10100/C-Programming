////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 3
// Problem Statement : Write a Program which accept one number from user and print that no of even no on screen
 // Date and Time : 26 April 13:12
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>


 void PrintEven(int iNo)
{   
    int iCnt = 0;
    int iAns = 0;
    if(iNo <= 0)
    {
        return;
    }

    else
    {  
        for(iCnt=1;iCnt <= iNo;iCnt++)
        {
            iAns = 2 * iCnt;
            printf("%d ",iAns);
        }

    }

}



int main()
{
    int iValue = 0;

    printf("Enter number \n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}