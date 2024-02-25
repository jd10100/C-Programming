/*

a
b   b
c   c   c
d   d   d   d


*/

#include<stdio.h>

void Display(int iRow, int iCol)
{   
    //Filter

 

    int i = 0, j = 0;
    char c = '\0';
    
    for(i = 1,c = 'a'; i <= iRow ; i++,c++)
    
    {
        

        for ( j = 1; j <= i; j++)

    
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