//write program which Display all Pallidrome element from singly linked list
//input :- | 11 |->| 28 |->| 414 |->| 6 |->| 89 |->Null 
//output :- 11 6 414

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

class Ass36P2
{
    private : 
        PNODE first;
        int iCount;

    public:
        Ass36P2()
        {
            first = NULL;
            iCount = 0;
        }

        void InsertFirst(int);

        void Display();

        int Count();

        void Palidrome();
        

};

void Ass36P2 :: InsertFirst(int no)
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

void Ass36P2 :: Display()
{
    PNODE temp = first;
    

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<"| NULL |\n";
}

int Ass36P2 :: Count()
{
    return iCount;
}

void Ass36P2 :: Palidrome()
{
   PNODE temp = first;
   int iDigit = 0,irev = 0,iNum1 = 0,iNum2 = 0;

   while(temp != NULL)
   {

        iNum1 = temp -> data;
        iNum2 = iNum1;

  irev = 0;
        while(iNum2 != 0)
        {
            iDigit = iNum2 % 10;
            irev = irev * 10 + iDigit;
            iNum2 = iNum2 / 10;
        }

        
        if(iNum1 == irev)
        {
            cout<<iNum1<<"\t";
        }
        temp = temp -> next;
   }
    
}

int main()
{
    Ass36P2 aobj;

    aobj.InsertFirst(89);
    aobj.InsertFirst(6);
    aobj.InsertFirst(414);
    aobj.InsertFirst(17);
    aobj.InsertFirst(28);
    aobj.InsertFirst(11);

    aobj.Display();

    aobj.Palidrome();


    //aobj.Display();

    return 0;
}