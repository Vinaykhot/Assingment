//write program which Display largest digit of each element of singly linked list
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

class Ass36P5
{
    private : 
        PNODE first;
        int iCount;

    public:
        Ass36P5()
        {
            first = NULL;
            iCount = 0;
        }

        void InsertFirst(int);

        void Display();

        int Count();

        void DisplayLarge();

        

       
        

};

void Ass36P5 :: InsertFirst(int no)
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

void Ass36P5 :: Display()
{
    PNODE temp = first;
    

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<"| NULL |\n";
}

int Ass36P5 :: Count()
{
    return iCount;
}

void Ass36P5 :: DisplayLarge()
{
    PNODE temp = first;
    int iNum = 0,iDigit = 1,iLarge = 0;

    cout<<"Largest element of each node : ";

    while(temp != NULL)
    {
        iNum = temp -> data;
       
        iLarge = 0;
        while(iNum != 0)
        {
            iDigit = iNum % 10;

            if(iDigit >= iLarge)
            {
                iLarge = iDigit;
            }
            iNum = iNum / 10;

            
        }

        cout<<iLarge<<"\t";

        temp = temp -> next;
    }
}



int main()
{
    Ass36P5 aobj;

    aobj.InsertFirst(819);
    aobj.InsertFirst(628);
    aobj.InsertFirst(401);
    aobj.InsertFirst(17);
    aobj.InsertFirst(000);
    aobj.InsertFirst(11);

    aobj.Display();

    
    aobj.DisplayLarge();
    //aobj.Display();

    return 0;
}