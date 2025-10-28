//write progra mwhich Display all product of each element of singly linked list
//input :- | 11 |->| 28 |->| 401 |->| 6 |->| 89 |->Null 
//outpu :- 1        16         4       6           72

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

class Ass36P3
{
    private : 
        PNODE first;
        int iCount;

    public:
        Ass36P3()
        {
            first = NULL;
            iCount = 0;
        }

        void InsertFirst(int);

        void Display();

        int Count();

        void DisplayProduct();

       
        

};

void Ass36P3 :: InsertFirst(int no)
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

void Ass36P3 :: Display()
{
    PNODE temp = first;
    

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<"| NULL |\n";
}

int Ass36P3 :: Count()
{
    return iCount;
}

void Ass36P3 :: DisplayProduct()
{
    PNODE temp = first;
    int iNum = 0,iDigit = 1,iprod = 1;

    while(temp != NULL)
    {
        iNum = temp -> data;
        iprod = 1;
        while(iNum != 0)
        {
            iDigit = iNum % 10;
            if(iDigit != 0)
            {
                iprod = iprod * iDigit;
            }
            iNum = iNum / 10;

            
        }

        cout<<iprod<<"\t";
        temp = temp -> next;
    }
}



int main()
{
    Ass36P3 aobj;

    aobj.InsertFirst(89);
    aobj.InsertFirst(60);
    aobj.InsertFirst(401);
    aobj.InsertFirst(17);
    aobj.InsertFirst(28);
    aobj.InsertFirst(11);

    aobj.Display();

    aobj.DisplayProduct();
    //aobj.Display();

    return 0;
}