///////////////////////////////////////////////////////////
//Accept two no from user and Display first no in second no times
//
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i=0;

    for(i = 0; i < iFrequency; i++)
    {
        printf("%d ",iNo);
    }

}


int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter Frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}