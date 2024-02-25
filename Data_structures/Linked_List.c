#include<stdio.h>
#include<stdlib.h>


/*
----------Linkde-List-------------

As Linkded-List is ADT we have functionalities to work on LL
*    Functionalities of the Linkde-List
1) Insertion in Linkde-List
- Insert at front
- Insert at last
- Insert at sepecified position

2) Deletion in Linked-List
- Delete first node
- Delete last node
- Delete specific node at a position

3) Linkde-List Overlook
- Print all elements
- first node Print


Functionalities 1) and 2) will use the Pointer to pointer to node
functionalities in 3) will use pointer to node


*/


/////////////////////////////////////////////////////
//
//          Notes on linked list Defining linked list
//      1)  always allocate memory by dynamic memory allocation 
//      2)  Create function of each functionality 
//      3)  No globle varible declaration
//
//
//
///////////////////////////////////////////////////////

//***************** Structure****************

struct node
{
    int data;
    struct node * next;

};




//**************** Typedef *****************

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


//*******************functions*****************

void InsertFirst(PPNODE,int);

void InsertLast(PPNODE,int);

void InsertAtPos(PPNODE,int,int);

void DeleteFirst(PPNODE);

void DeleteLast(PPNODE);

void DeleteAtPos(PPNODE,int);

void Display(PNODE);

int Count(PNODE);



//**********************Main Function************************




int main()
{
    int iRet = 0;
    PNODE first  = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,80);
    InsertFirst(&first,70);
    InsertFirst(&first,50);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    Display(first);

    InsertFirst(&first,1);
    
    Display(first);
    
    DeleteFirst(&first);

    Display(first);

    InsertLast(&first,1000);

    Display(first);

    DeleteLast(&first);

    Display(first);

    InsertAtPos(&first,3000,3);

    Display(first);

    DeleteAtPos(&first,3);

    Display(first);

    return 0;
}




///////////////////////////////////////////////////////////////
//
//  Inserting node at first position
//
////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE head, int no)
{
// Allocation memory for node(dynamically)
// initialize that node

//Check whether the LL is empty or not
//if LL is empty the new node is the first node so update the addess in the first pointer through head

//if LL is not empty the store the address of the first node in the next pointer of our new node
//update first  pointer through head

    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));   //newn = (struct node*)malloc(12);

    newn -> data = no;
    newn -> next = NULL;

    if((*head) == NULL)                 //LL is empty
    {
        *head = newn;
    }
    else                                //LL contain at least one node;
    {
        newn -> next = *head;
        *head = newn;
    }




}


///////////////////////////////////////////////////////////////
//
//  Inserting node at Last position
//
////////////////////////////////////////////////////////////////

void InsertLast(PPNODE head, int no)
{
// Allocation memory for node(dynamically)
// initialize that node

//Check whether the LL is empty or not
//if LL is empty the new node is the first node so update the addess in the first pointer through head

//if LL is not empty then
//travel till last node
//store the address of new node in the next pointer of the last node;

    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));       //newn = (struct node *)malloc(12);

    newn -> data = no;
    newn -> next = NULL;

    if((*head) == NULL)
    {
        *head = newn;
    }
    else
    {
        PNODE temp = NULL;
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp ->next;
        }

        temp -> next = newn;
       
    }
    



}

///////////////////////////////////////////////////////////////
//
//  Inserting node at Last AT position
//
////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE head, int no, int pos)
{
    //consider no of nodes are 4

    //if Position invalid then return directly( 1 < and > 5)
    //if Position is 1 then call insert first
    //if position is N+1 then call InsertLast

    PNODE newn = NULL;
    PNODE temp = NULL;
    int size = 0;
    int iCnt = 0;
    
    size = Count(*head);

    if((pos < 1) || (pos > (size + 1)))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(head,no);
    }

    else if(pos ==(size+1))
    {
        InsertLast(head,no);
    }

    else
    {   
        
        newn=(PNODE)malloc(sizeof(NODE));

        newn ->data = no;
        newn -> next = NULL;

        
        temp = *head;

        for(iCnt = 1; iCnt < (pos-1) ; iCnt++)
        {
            temp = temp ->next;

        }
        newn->next = temp->next;
        temp->next = newn;

    }


}
///////////////////////////////////////////////////////////////
//
//  Deleting node at first position
//
////////////////////////////////////////////////////////////////


void DeleteFirst(PPNODE head)
{
    //if LL is empty then return 
    //if LL contains at least one node then create a temp PNODE copy the address of the head in the pointer temp
    //store the address of second node in the head
    //free the temp
    
    if(*head == NULL)
    {
        return;
    }
    
    else
    {
        PNODE temp = *head;
        *head = temp -> next;
        free(temp);
    }



}
///////////////////////////////////////////////////////////////
//
//  Deleting node at Last position
//
////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE head)
{
    //if LL is empty then return
    //if ll contains one delete that node
    //if ll contains more than one node then travel till second last node then delete last node

    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }

    else
    {
        temp = *head;

        while(temp->next->next != 0)
        {
            temp = temp -> next;
        }

        free(temp->next);
        temp->next = NULL;

    }



}

///////////////////////////////////////////////////////////////
//
//  Deleting node at specific position
//
////////////////////////////////////////////////////////////////


void DeleteAtPos(PPNODE head,int pos)
{
    //consider no of nodes are 4

    //if Position invalid then return directly( 1 < and > 4)
    //if Position is 1 then call deletefirst
    //if position is N then call InsertLast (position is 4)

    PNODE temp = NULL;
    PNODE tempdelete = NULL;
    int size = 0;
    int iCnt = 0;
    
    size = Count(*head);

    if((pos < 1) || (pos > (size)))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(head);
    }

    else if(pos ==(size))
    {
        DeleteLast(head);
    }

    else
    {   
    
        temp = *head;

        for(iCnt = 1; iCnt < (pos-1) ; iCnt++)
        {
            temp = temp ->next;

        }

        tempdelete = temp ->next;
        temp->next = temp -> next -> next;

        free(tempdelete);

    }





}

void Display(PNODE head)
{
    printf("Elements in the linked list are:\n");
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head -> next;
    }
    printf("\n");
}

int Count(PNODE head)
{
    int iCnt = 0;
    while(head != NULL)
    {
        iCnt++;
        head = head -> next;
    }
    return iCnt;
}

