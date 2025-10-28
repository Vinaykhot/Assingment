//write program which returns Minimum elements from singly linear list
//input :| 10 |->| 20 |->| 30 |->| 40 |->| 90 |->| 70 |
//output : 10

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

    newn->data = no;
    newn -> next = NULL;

    if(((*first) == NULL ))
    {
        *first = newn;
         

    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount++;
}


int Minimum(PNODE first)
{
    int imin = first->data;
   
    while(first != NULL)
    {
        if(imin > first->data)
        {
            imin = first -> data;
        }
        
        
        
        first = first -> next;
        
    }

   return imin;
    
}

void Display(PNODE first)
{

    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}


int main()
{

    PNODE head = NULL;
    int iret = 0,ivalue;

   

    InsertFirst(&head,70);
    InsertFirst(&head,5 );
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

   

    

    Display(head);
    
    iret = Minimum(head);
    printf("Maximum elemen from LinkList is : %d",iret);
    


  return 0;  
}