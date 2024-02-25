#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


void Push(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    
    if((*head) == NULL)
    {
        (*head) = newn;
    }

    else
    {
        newn -> next = (*head);
        (*head) = newn;
    }

    printf("PUSH:%d\n",(*head)->data);

}



void Pop(PPNODE head)
{
    PNODE temp = NULL;

    if((*head) == NULL )
    {
        printf("Stack is empty\n");
        return;
    }
    
    else
    {
        temp = (*head);

        printf("POP:%d\n",(*head)->data);

        (*head) = (*head) -> next;

        free(temp);
    }

}

int Top(PNODE head)
{
    if(head == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }

    else
    {
        printf("TOP:%d\n",head ->data);
    }
}


int main()
{
    PNODE first = NULL;

    Push(&first,50);
    Push(&first,40);
    Push(&first,30);
    Push(&first,20);
    Push(&first,10);

    Pop(&first);
    Pop(&first);
    Pop(&first);
    Pop(&first);
    Pop(&first);

    Top(first);

    return 0;

}