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


void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }


}



int main()
{
    int iValue = 0;

    printf("Enter the no:");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}