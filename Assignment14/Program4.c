////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 13
// Problem Statement : Accept N no from user and print the pattern
// accept through command line arguments
/*
Enter no of rows:4
Enter no of Columns5

**** ./a.out 4 5

4	4	4	4	4	
3	3	3	3	3	
2	2	2	2	2	
1	1	1	1	1
*/
                
// Date and Time : 17 May 19:30
// Platform : Linux
///////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow, int iColumn)
{
    int iCnto = 0, iCnti = 0;

    for(iCnto = iRow; iCnto >= 1; iCnto--)
    {
        for(iCnti = 1; iCnti <= iColumn; iCnti++)
        {
            printf("%d\t",iCnto);
        }

        printf("\n");
    }

}


int main(int argc, char* argv[])
{   
    int iRow = 0, iCol = 0;

    iRow = atoi(argv[1]);
    iCol = atoi(argv[2]);
    
    Pattern(iRow,iCol);

    return 0;
}