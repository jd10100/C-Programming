////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 19
// Problem Statement : Write a program which search first occurance of the
// no in singly linked list and return the index of the no
// Date and Time : 25 May 12:36
// Platform : Linux
///////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define true 1
#define false 0

struct Node
{
    int data;
    struct Node * next;

};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


void Insert(PPNODE head, int no)
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
        PNODE temp = NULL;
        temp = (*head);

        while ((temp -> next) != 0)
        {
            temp  = temp ->next;
        }

        temp -> next = newn;

        

    }

}


void Display(PNODE head)
{
    while(head != NULL)
    {   
        printf("%d\t",head -> data);
        head = head -> next;
    }


}


int FirstOccurance(PNODE head, int no)
{
    int iIdx = 1;
    BOOL flag = false;
    
    while(head != NULL)
    {

        if((head -> data) == no)
        {
            flag = true;
            break;
        }
             
        head = head -> next;
        iIdx++;

    }

    if(flag == false)
    {
        iIdx = -1;
    }


    return iIdx;
}


int main()
{
    PNODE first = NULL;
    int iCnt = 0, iValue = 0, iSer = 0, iRet = 0, iEle=0;

    printf("Enter no of elements:");
    scanf("%d",&iEle);

    for(iCnt = 1; iCnt <= iEle;iCnt++)
    {
        printf("Enter %dth Element:",iCnt);
        scanf("%d",&iValue);

        Insert(&first,iValue);
    }

    Display(first);

    printf("\nEnter no to search:");
    scanf("%d",&iSer);
    
    iRet = FirstOccurance(first,iSer);

    printf("Index of first occurance:%d",iRet);


   

}

