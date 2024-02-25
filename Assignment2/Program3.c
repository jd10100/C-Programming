///////////////////////////////////////////////////////////
//Accept the no from the user, if no is 
// less that 10 then print "Hello" or print "Demo"
//
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }


}


int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}