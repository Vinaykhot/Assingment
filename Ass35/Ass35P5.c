//Write a program which Addition of elements from singly linklist
//input : | 110 |->| 230 |->| 20 |->| 240 |->| 640 |->NULL
//output : 2    5   2   6   10
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next ;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn =(PNODE)malloc(sizeof(NODE));

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
        printf("| %d |->",first->data);
        first = first -> next;

    }
    printf("| NULL |\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;

    }

    return iCount;
}

void SumDigit(PNODE first)
{
    int isum = 0,iDigit = 0;
    int icount = Count(first);

    while(first != NULL)
    {
        isum = 0;
        for(int i = 0;i < icount;i++)
        {
            iDigit = first->data % 10;
            isum = isum + iDigit; 
            first -> data = first->data / 10;  
        }

        printf("%d\t",isum);
        first = first -> next;

    }
}

int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head,640);
    InsertFirst(&head,240);
    InsertFirst(&head,20);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head);
    iret = Count(head);
    printf("Number of Nodes : %d\n",iret);

    SumDigit(head);
    


    return 0;

}