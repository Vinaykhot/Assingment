//write programwhich reverse each element of singly linked list
//input :- | 11 |->| 28 |->| 41 |->| 6 |->| 89 |->Null 

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node * PPNODE;

class Ass36P1
{
    private : 
        PNODE first;
        int iCount;

    public:
        Ass36P1()
        {
            first = NULL;
            iCount = 0;
        }

        void InsertFirst(int);

        void Display();

        int Count();

        void Reverse();

};

void Ass36P1 :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn ->data = no;
    newn -> next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn -> next = first;
        first = newn;
    }
    iCount++;
}

void Ass36P1 :: Display()
{
    PNODE temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<"| NULL |\n";
}

int Ass36P1 :: Count()
{
    return iCount;
}

void Ass36P1 :: Reverse()
{
    PNODE temp = first;
    int i = 0,itemp = 0,iDigit = 0;
    int irev = 0;
    

    for(i = 1; i <= iCount ; i++)
    {
        irev = 0;
        while(temp -> data != 0)
        {
            iDigit = temp -> data % 10;
            irev = (irev * 10) + iDigit ;
            temp -> data = temp -> data / 10;
        }

        temp -> data = irev;
        temp = temp -> next;
    }
}
int main()
{
    Ass36P1 aobj;

    aobj.InsertFirst(89);
    aobj.InsertFirst(6);
    aobj.InsertFirst(41);
    aobj.InsertFirst(17);
    aobj.InsertFirst(28);
    aobj.InsertFirst(11);

    aobj.Display();

    aobj.Reverse();

    cout<<"Linked List After Reverse\n ";
    aobj.Display();
    return 0;
}