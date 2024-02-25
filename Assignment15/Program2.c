/*
Enter the no of Rows
4
Enter the no of Columns
4
2	4	6	8	
1	3	5	7	
2	4	6	8	
1	3	5	7
*/

#include <stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCount = 0, iCnto = 0, iCnti = 0;
    int iSaveValue = 0;

    for(iCnto = 1; iCnto <= iRow;iCnto++ )
    {   
            if(iCnto % 2 == 0)
            {
                iCount = 1;
            }
            else
            {
                iCount = 2;
            }

        for(iCnti = 0; iCnti < iColumn; iCnti++)
        {   
            printf("%d\t",iCount);

            iCount = iCount + 2;
           
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