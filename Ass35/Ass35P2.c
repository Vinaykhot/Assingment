//Write a program which displays all elements which are perfect from singly linklist
//input : | 11 |->| 20 |->| 17 |->| 41 |->| 6 |->| 89  |->NULL
//output : 11 17 41 89
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

void DisplayPrime(PNODE first)
{
    int i = 0,isum = 0;
    int iCount = 0;
    iCount = Count(first);
    
    
    while(first != NULL)
    {
        
       for(i = 2;i <= (first -> data)/2 ; i++)
        {   
            isum = first->data;
            if((first -> data % i) == 1)
            {
                
                printf("%d\t",isum);
                
              
            }
            break;
            
        }
      
        first = first -> next;
        
    }
        
    
}

int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 89);
    InsertFirst(&head , 6);
    InsertFirst(&head , 41);
    InsertFirst(&head , 17);
    InsertFirst(&head , 48);
    InsertFirst(&head , 20);
    InsertFirst(&head , 11);
    InsertFirst(&head , 22);
    InsertFirst(&head , 44);
    

    Display(head);
    iret = Count(head);
    printf("%d",iret);

    DisplayPrime(head);

    return 0;
}