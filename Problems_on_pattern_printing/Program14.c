/*

A   B   C   D
A   B   C   D
A   B   C   D
A   B   C   D

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{   
    //Filter

 

    int i = 0, j = 0;
    char c = '\0';
    
    for(i = 1; i <= iRow ; i++)
    
    {
        for ( j = 1,c = 'A'; j <= iCol; j++,c++)
        
        {      
            
            
                    printf("%c\t",c);

        }

        printf("\n");        
    }

        
    }
        
           






int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter no of Rows:");
    scanf("%d",&iValue1);

    printf("Enter no of Rows:");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);
    return 0;
}