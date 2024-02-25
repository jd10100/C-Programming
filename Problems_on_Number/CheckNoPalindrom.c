#include <stdio.h>
#include <stdbool.h>

int Count(int no)
{
    int iCount = 0;
    int iCnt = 0;


    while(no > 0)
    {
        iCount++;
        no = no / 10;

    }

    return iCount;
}



bool CheckPalindrom(int no)
{
    int cpno = no;
    int digit = 0, Sumdigit = 0;
    int Size = 0;
    int iCnt = 0;
    bool flag = false;
    Size = Count(no);

    printf("size :%d\n",Size);

    while(cpno > 0)
    {   
        
        digit = cpno % 10;
        
        
        int tempSum = digit;
        
        
        for(iCnt = 1; iCnt <= (Size - 1); iCnt++ )
        {
           
            tempSum = tempSum * 10;
        }

        Size--;

        Sumdigit = Sumdigit + tempSum;

        cpno = cpno /10;
    }
    
    if(Sumdigit == no)
    {
        flag = true;
    }
    else
    {
        flag = false;
    }

return flag;

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the no:");
    scanf("%d",&iValue);

    bRet = CheckPalindrom(iValue);

    if(bRet == true)
    {
        printf("No is palindrom\n");
    }

    else
    {
        printf("No is not palindrom\n");
    }

    return 0;
}