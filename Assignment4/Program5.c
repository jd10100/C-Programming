////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 3
// Problem Statement : Problem Statement : Write a Program which take one no as imput
// and prints the difference between factors and non factors;
// Date and Time : 26 April 13:12
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>


int FactDiff(int iNo)
{
    int iFactSum = 0;
    int iNFactSum = 0;
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {   

        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNFactSum = iNFactSum + iCnt;

        }
    }

    return iFactSum - iNFactSum;
}



int main()
{
    int iValue = 0;
    int iRev = 0;

    printf("Enter the no:");
    scanf("%d",&iValue);

    iRev = FactDiff(iValue);

    printf("%d",iRev);
    
    return 0;
}