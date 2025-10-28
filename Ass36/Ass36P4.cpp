//write program which Display smallest digit of each element of singly linked list
//input :- | 11 |->| 28 |->| 401 |->| 6 |->| 89 |->Null 
//outpu :- 1        2         0       6           8

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

class Ass36P4
{
    private : 
        PNODE first;
        int iCount;

    public:
        Ass36P4()
        {
            first = NULL;
            iCount = 0;
        }

        void InsertFirst(int);

        void Display();

        int Count();

        void DisplaySmall();

        

       
        

};

void Ass36P4 :: InsertFirst(int no)
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

void Ass36P4 :: Display()
{
    PNODE temp = first;
    

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<"| NULL |\n";
}

int Ass36P4 :: Count()
{
    return iCount;
}

void Ass36P4 :: DisplaySmall()
{
    PNODE temp = first;
    int iNum = 0,iDigit = 1,ismall = 1;

    cout<<"Smallest element of each node : ";

    while(temp != NULL)
    {
        iNum = temp -> data;
       
        ismall = temp -> data;
        while(iNum != 0)
        {
            iDigit = iNum % 10;

            if(iDigit <= ismall)
            {
                ismall = iDigit;
            }
            iNum = iNum / 10;

            
        }

        cout<<ismall<<"\t";

        temp = temp -> next;
    }
}



int main()
{
    Ass36P4 aobj;

    aobj.InsertFirst(819);
    aobj.InsertFirst(628);
    aobj.InsertFirst(401);
    aobj.InsertFirst(17);
    aobj.InsertFirst(28);
    aobj.InsertFirst(11);

    aobj.Display();

    
    aobj.DisplaySmall();
    //aobj.Display();

    return 0;
}