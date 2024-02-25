/*
Enter the no of Rows
5
Enter the no of Columns
5
1	2	3	4	5	
-1	-2	-3	-4	-5	
1	2	3	4	5	
-1	-2	-3	-4	-5	
1	2	3	4	5
*/

#include <stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCount = 0, iCnto = 0, iCnti = 0;
   

    for(iCnto = 1; iCnto <= iRow;iCnto++ )
    {   
            if(iCnto % 2 == 0)
            {
                iCount = -1;
            }
            else
            {
                iCount = 1;
            }

        for(iCnti = 0; iCnti < iColumn; iCnti++)
        {   
            if(iCnto % 2 == 0)
            {    printf("%d\t",iCount);

                iCount = iCount - 1;
            }
            else
            {
                printf("%d\t",iCount);

                iCount = iCount + 1;

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