////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 3
// Problem Statement : Problem Statement : Write a Program which take one no as imput
// and prints the factors of that no in decreasing oredr;
// Date and Time : 26 April 13:12
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>


int SumNonFact(int iNo)
{
    int iFactSum = 0;
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFactSum = iFactSum + iCnt;
        }
    }

    return iFactSum;
}



int main()
{
    int iValue = 0;
    int iRev = 0;

    printf("Enter the no:");
    scanf("%d",&iValue);

    iRev = SumNonFact(iValue);

    printf("%d",iRev);
    
    return 0;
}