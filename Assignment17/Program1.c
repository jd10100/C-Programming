/*
Enter no of Rows:5
Enter no of Rows:5
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*

*/

#include<stdio.h>

void pattern(int iRow, int iCol)
{

    int i = 0,j = 0;

    for(i = iRow; i >= 1; i--)
    {

        for(j = 1; j <= i ;j++)
        {
            printf("*\t");
        }

    printf("\n");

    }



}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the no of Rows:");
    scanf("%d",&iValue1);

    printf("Enter no of columns:");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}




