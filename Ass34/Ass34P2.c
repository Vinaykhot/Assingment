//Serach last Occurence of particular element from Singly Linear List, return the position where the element found.
//input : 30
//output : 6


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


int SearchLast(PNODE first,int no)
{
    int ipos = 1,i= 1;
   

   

    while(first != NULL)
    {
        if(first->data == no)
        {
            i = ipos;
        }
        
        ipos++;
        first = first -> next;
        
    }

   return i;
    
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

    printf("Enter the search element : ");
    scanf("%d",&ivalue);

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

   

    

    Display(head);
    
    iret = SearchLast(head,ivalue);
    printf("Position of %d is on LL: %d",ivalue,iret);
    


  return 0;  
}