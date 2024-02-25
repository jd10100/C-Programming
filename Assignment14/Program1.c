////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 13
// Problem Statement : Accept N no from user and print the pattern
// 
// Test Case : N: 5
//        input : iRow = 4  iCol = 5
//                  A	B	C	D	E
//                  A	B	C	D	E
//                  A	B	C	D	E
//                  A	B	C	D	E
                
// Date and Time : 16 May 19:30
// Platform : Linux
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iColumn)
{
    
    int iCnt1 = 0, iCnt2 = 0;
    char Char = '\0';
    for(iCnt1 = 0; iCnt1 < iRow; iCnt1++)
    {
        for(Char ='A',iCnt2 = 0; iCnt2 < iColumn;Char++,iCnt2++ )
        {

            printf("%c\t",Char);

        }

        printf("\n");

    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter no of rows:");
    scanf("%d",&iValue1);

    printf("Enter no of Column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}