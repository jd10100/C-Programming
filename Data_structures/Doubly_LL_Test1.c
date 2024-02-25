#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node * next;
    struct node * prev; //*
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
    
    if(*head == NULL)
    {
        *head = newn;
    }

    else
    {
        newn -> next = *head;
        (*head) -> prev = newn;
        (*head) = newn;
    }

}

void InsertLast(PPNODE head,int no)
{
    if(*head == NULL)
    {
        InsertFirst(head,no);
    }
    
    else
    {
        PNODE temp = NULL;
        
        PNODE newn = NULL;
        newn =(PNODE)malloc(sizeof(NODE));

        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = (*head);

        while(temp -> next != NULL)
        {
        temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;
    }
        

}


void InsertAtPos(PPNODE head,int no,int pos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    int iSize = 0;
    iSize = Count(*head);
    
    if(pos < 1 || pos >(iSize+1) )
    {
        printf("Invalid positon");
    }

    else if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == (iSize +1))
    {
        InsertLast(head,no);
    }
    
    else
    {
        int iCnt = 0;

        PNODE temp = NULL;
        PNODE newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = (*head);
        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        /*
        temp -> next -> prev = newn;
        newn -> next = temp -> next -> next;
        newn -> next = temp;
        temp -> next = newn;
        */
        
        newn -> next = temp -> next;
        temp -> next -> prev = newn;    //*
        temp -> next = newn;
        newn -> prev = temp; 

    }

}







void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    temp = *head;

    (*head) = (*head) -> next;
    (*head) -> prev = NULL;

    free(temp);

}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    temp = (*head);

    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }

    
    free(temp -> next);
    temp -> next = NULL;

}

void DeleteAtPos(PPNODE head,int pos)
{
    int iSize = 0;
    iSize = Count(*head);
    
    if(pos < 1 || pos >(iSize) )
    {
        printf("Invalid positon");
    }

    else if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == iSize)
    {
        DeleteLast(head);
    }
    
    else
    {
        int iCnt = 0;

        PNODE temp = NULL;
    
        temp = (*head);
        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev  = temp;
     
    }


}





void Display(PNODE head)
{
    while(head != NULL)
    {   
        printf("%d->",head->data);
        head = head -> next;
    }
    printf("\n");


}

int Count(PNODE head)
{
    int iCount = 0;
    
    while(head != NULL)
    {   
        iCount++;
        head = head -> next;
    }

    return iCount;
}





int main()
{
    PNODE first;
    
    first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,81);
    InsertFirst(&first,71);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);

    DeleteFirst(&first);

    Display(first);

    InsertLast(&first,1001);

    Display(first);

    DeleteLast(&first);

    Display(first);

    InsertAtPos(&first,1001,3);
    
    Display(first);

    DeleteAtPos(&first,3);

    Display(first);
    return 0;
}