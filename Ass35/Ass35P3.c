//Write a program which make Addition of Even Numbers from singly linklist
//input : | 11 |->| 20 |->| 32 |->| 41 |->NULL
//output : 52
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d  |->",first-> data);
        first = first -> next;

    }
    printf("NULL");
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        first = first -> next;

    }
    printf("\n");
    return iCount;
}

int AditionEven(PNODE first)
{
    int i = 0,isum = 0;
    int iCount = 0;
    iCount = Count(first);
    
    
    while(first != NULL)
    {
        
        if((first -> data % 2) == 0)
        {
            isum = isum + first -> data;
        }
        
        first = first -> next;
        
    }
        
    return isum;
}

int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 41);
    InsertFirst(&head , 32);
    InsertFirst(&head , 20);
    InsertFirst(&head , 11);
  
    

    Display(head);
    iret = Count(head);
    printf("%d",iret);

    iret = AditionEven(head);
    printf("%d",iret);

    return 0;
}