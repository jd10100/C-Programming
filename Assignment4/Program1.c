////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 4
// Problem Statement : Write a Progarm whilch accepts no from
//from user and display the multiplication of factor of that no
// Date and Time : 28 April 11:10
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>


int MultiFact(int iNo)
{
    int iFactMul = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iFactMul = iFactMul * iCnt;
        }
    }

    return iFactMul;

}



int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}