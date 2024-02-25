#include<stdio.h>
#include<stdlib.h>




struct demo
{

    int data;

    struct demo *address;


};

typedef struct demo NODE;
typedef struct demo * PNODE;
typedef struct demo ** PPNODE;

void InsertAtFirst(PPNODE Head, int Data)
{
    PNODE ptr = NULL; // node declare 

    ptr = (PNODE)malloc(sizeof(NODE)); // node define

    ptr->data = Data;
    ptr->address = NULL;

    if(*Head == NULL)
    {
        *Head = ptr;

    }
    else
    {
        ptr->address = *Head;
        *Head = ptr;
    }



}


void InsertAtLast(PPNODE Head, int Data)
{   
    PNODE Curser = *Head;
    PNODE ptr = NULL;
    ptr =(PNODE)malloc(sizeof(NODE));
    
    ptr->data = Data;
    ptr->address = NULL;
    
    if(*Head == NULL)
    {
        *Head = ptr;

    }
    else
    {
        while(Curser->address != NULL)
        {
            Curser = Curser->address;

    
        }
        Curser->address = ptr;

    }



}


void InsertAtPosition(PPNODE Head, int Data,int Position)
{   
    auto int iCnt = 0;
    PNODE pCur = *Head;
    PNODE pNxt = NULL;

    PNODE ptr = NULL;
    ptr =(PNODE)malloc(sizeof(NODE));
    ptr->data = Data;
    ptr->address =NULL;

    if(*Head == NULL)
    {
        InsertAtFirst(Head,Data);
        return;
    }


    for(iCnt = 1; iCnt < Position; iCnt++)
    {

        pCur = pCur->address;

    }

    pNxt = pCur;

    pNxt = pNxt->address;

    ptr->address = pNxt;

    pCur->address = ptr;



}

void DeleteFirst(PPNODE Head)
{
    PNODE pCur = NULL;
    PNODE pHead = NULL;
    pCur = *Head;
    pHead = *Head;

    if(*Head == NULL)
    {
        printf("Linked List is empty \n");
        return;

    }
    else
    {
        pCur = pCur->address;

        *Head = pCur;


    }

    free(pHead);


}

void Display(PNODE NODE)
{
    while(NODE != NULL)
    {
        printf("%d ",NODE->data);
        NODE = NODE->address;
    }
    printf("\n");
}


int main()
{
    PNODE first = NULL;

    
    InsertAtFirst(&first, 101);
    InsertAtFirst(&first, 90);
    InsertAtFirst(&first, 80);
    InsertAtFirst(&first, 50);
    InsertAtFirst(&first, 10);
    InsertAtLast(&first, 1000);
    Display(first);
    InsertAtPosition(&first,5000,3);
    Display(first);
    DeleteFirst(&first);
    Display(first);
    return 0;
}