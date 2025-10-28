//Write a program which display 2nd maximum from singly linklist
//input : | 110 |->| 230 |->| 320 |->| 240 |->NULL
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

int SecMaximum(PNODE first)
{
    int imax1 = 0,imax2 =0;
    int i = 0;
    int icount = Count(first);
    
    imax2 = first -> data;
    
    while(first != NULL)
    {
        
        if(imax1 < first->data)
        {
            imax2 = imax1;
            imax1 = first->data;
        }
        
        first = first -> next;
        
    }

        
    return imax2;
}

int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 345);
    InsertFirst(&head , 235);
    InsertFirst(&head , 240);
    InsertFirst(&head , 110);
  
    

    Display(head);
    iret = Count(head);
    printf("%d",iret);

    iret = SecMaximum(head);
    printf("\n%d",iret);

    return 0;
}