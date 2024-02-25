////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 3
// Problem Statement : Write a Program which take one no as imput 
// and prints the factors of that no in decreasing oredr;
// Date and Time : 26 April 13:12
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>


void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2);iCnt > 0; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}