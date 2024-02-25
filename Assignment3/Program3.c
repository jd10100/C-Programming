////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 3
// Problem Statement : Write a program which accept number from user and print the even factors of the number 
// Date and Time : 26 April 13:12
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>


 void DisplayFactor(int iNo)
{
    int i = 0;


    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i=1; i <= (iNo/2); i++)
    {
        if(((iNo % i) == 0) && ((i % 2) == 0)) //conditon 1 will check weather no is factor
        {                                 // Conditon 2 will check whether no is even                              
            printf("%d ",i);
        }

    }
   
}



int main()
{   
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}