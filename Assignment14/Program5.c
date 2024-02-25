////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 13
// Problem Statement : Accept N no from user and print the pattern
// 
/*
Enter no of rows:4
Enter no of Columns5
A	A	A	A	A	
B	B	B	B	B	
C	C	C	C	C	
D	D	D	D	D
*/
                
// Date and Time : 17 May 19:30
// Platform : Linux
///////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iColumn)
{   
    int iCnto = 0, iCnti = 0;
    int iPrint = 0;
    
    iPrint = 1;
    
    for(iCnto = 1; iCnto <= iRow ; iCnto++)
    {
        
        for(iCnti = 1; iCnti <= iColumn ;iCnti++)
        {
            printf("%d\t",iPrint);
            iPrint++;
        }
    
      

        printf("\n");

    }


}


int main(int argc,char *argv[])
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter no of rows:");
    scanf("%d",&iValue1);

    printf("Enter no of Columns");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}