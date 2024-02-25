////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 13
// Problem Statement : Accept N no from user and print the pattern
// 
/*
Enter no of rows:4
Enter no of Column:5
A	B	C	D	E	
a	b	c	d	e	
A	B	C	D	E	
a	b	c	d	e
*/
                
// Date and Time : 17 May 19:30
// Platform : Linux
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iColumn)
{
    
    int iCnt1 = 0, iCnt2 = 0;
    char Char = '\0';
    char cChar1 = '\0';
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        if((iCnt1 % 2) == 0)
        {
            cChar1 = 'a';
        }
        else
        {
            cChar1 = 'A';
        }
            
        for(Char=cChar1,iCnt2 = 0; iCnt2 < iColumn;Char++,iCnt2++ )
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