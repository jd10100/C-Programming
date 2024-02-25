////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 3
// Problem Statement : Accept one character from the user and convert the case of the character
//                     Input : a    Output: A
//                     Input : A    Output: a
// Date and Time : 26 April 13:12
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>


void DisplayConvert(int Cvalue)
{
    if(Cvalue >= 65 && Cvalue <= 90)
    {
        printf("%c",(Cvalue + 32));
    }

    else if(Cvalue >= 97 && Cvalue <= 122)
    {
        printf("%c",(Cvalue - 32));

    }
}



int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}