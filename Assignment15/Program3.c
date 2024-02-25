#include <stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCount = 0, iCnto = 0, iCnti = 0;
    char cCh = '\0';

    for(iCnto = 1; iCnto <= iRow;iCnto++ )
    {   
        iCount = 1;
        cCh = 'a';


        for(iCnti = 0; iCnti < iColumn; iCnti++)
        {   
            if(iCnto % 2 == 0)
            {
                printf("%d\t",iCount);
                iCount++;
            }
            else
            {
                printf("%c\t",cCh);
                cCh++;
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