/*
Enter the no of Rows
4
Enter the no of Columns
4
*	#	#	#	
*	*	#	#	
*	*	*	#	
*	*	*	*
*/

#include <stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCount = 0, iCnto = 0, iCnti = 0;
    int iSaveValue = 0;

    for(iCnto = 0; iCnto < iRow;iCnto++ )
    {   

        for(iCnti = 0; iCnti < iColumn; iCnti++)
        {   
            if(iCnto == iCnti || iCnto > iCnti)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
           
            
        }
        printf("\n");
        
    }





}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the no of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter the no of Columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}