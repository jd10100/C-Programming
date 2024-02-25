//Create a LL of 5 node
//Insert data in LL
//Print max no in LL



#include <stdio.h>
#include <stdlib.h>

struct demo
{
    int data;
    struct demo * address;

};

typedef struct demo NODE;
typedef struct demo * PNODE;
typedef struct demo ** PPNODE;



int MaxInLL(PNODE head) 
{
    int max = 0;
    while(head != NULL)
    {
        int data = head -> data;
        
        if(max < data)
        {
            max = data;
        }

        head = head -> address;
    }


    return max;
}




void Insert(PPNODE head, int iNo)
{
    
    PNODE ptr = NULL;
    ptr=(PNODE)malloc(sizeof(NODE));
    
    ptr->data = iNo;
    ptr -> address = NULL;
    
    if(*head == NULL)
    {
        *head = ptr;
    }

    else
    {
        ptr -> address = *head;
        *head = ptr;
    }



}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("%d\t",head -> data);

        head = head -> address;
    }
    printf("\n");

}




int main()
{
    int iValue = 0, iCnt = 0, iNo = 0, iRet = 0;
    PNODE first = NULL;

    printf("Enter the no of elements:");
    scanf("%d",&iNo);

    for(iCnt = 0; iCnt < iNo; iCnt ++)
    {
        printf("Enter the %dst of elements:",iCnt+1);
        scanf("%d",&iValue);


        Insert(&first,iValue);

    }
    
    Display(first);

    iRet = MaxInLL(first);
    printf("%d",iRet);

    return 0;
}