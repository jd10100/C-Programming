 #include<stdio.h>
 #include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = 101;
    newn -> next = NULL;


    if(*Head == NULL)
    {

        *Head = newn;

    }
    else
    {
        newn -> next = *Head;
        *Head = newn;

    }






}



 int main()
 {      
    // Static memory allocation
     struct node obj;

    //Dynamic memory allocation

    struct node *ptr = (struct node *)malloc(sizeof(struct node));



     return 0;
 }