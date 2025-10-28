//Complete Below Function
// SearchLast() - Search Last occurence of Number
// EvenCount() - Count even elements;
// OddCount() - Count odd elements 
// SumAll()  -     sum of all elements

#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int Size;

    public:
        Array(int value)
        {
            this->Size = value;
            this->Arr = new int[Size];

        }

        Array(Array &ref)
        {
            this->Size = ref.Size;
            this->Arr = new int[this->Size];

            for(int i = 0;i < Size;i++)
            {
                this -> Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept();
        void Display();

};

void Array :: Accept()
{
    cout<<"Please Enter the values\n";

    for(int i = 0;i < this->Size;i++)
    {   
        
        cin>>Arr[i];
    }

}

void Array :: Display()
{
    cout<<"Elements are\n";

    for(int i = 0;i < this->Size;i++)
    {
        cout<<Arr[i]<<" ";

    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public :
        ArrSearch(int no): Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();

};

int ArrSearch :: Frequency(int value)
{
    int icnt = 0;

    for(int i = 0;i < this->Size;i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }

    return icnt;
}

int ArrSearch :: SearchFirst(int value)
{
    int i = 0;
    for( i = 0 ; i < this->Size;i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == Size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int ArrSearch :: SearchLast(int value)
{
    int i = 0;
    for( i = this->Size ; i > 0;i--)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == 0)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
} 

int ArrSearch :: EvenCount()
{
    int i = 0,icnt = 0;
    
    for(i = 0 ;i < this->Size ; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            icnt++;
        }
    }

    return icnt;
}

int ArrSearch :: OddCount()
{
    int i = 0,icnt = 0;
    
    for(i = 0 ;i < this->Size ; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            icnt++;
        }
    }

    return icnt;
}

int ArrSearch :: SumAll()
{
    int i = 0,isum = 0;
    
    for(i = 0 ;i < this->Size ; i++)
    {
        isum = isum + Arr[i];
    }

    return isum;
}


int main()
{
    
    ArrSearch aobj(12);
    int ivalue = 0;
    
    int iret = 0 ;

    aobj.Accept();
    aobj.Display();

    cout<<"Enter the Value: \n";
    cin>>ivalue;



    iret = aobj.Frequency(ivalue);
    cout<<"Frequency of 11 : \n"<<iret<<"\n";

    iret = aobj.SearchFirst(ivalue);
    cout<<"First Occurence of "<<ivalue<<": \n"<<iret<<"\n";

    iret = aobj.SearchLast(ivalue);
    cout<<"Last Occurence of "<<ivalue<<": \n"<<iret<<"\n";

    iret = aobj.EvenCount();
    cout<<"Even elements in Array : \n"<<iret<<"\n";

    iret = aobj.SumAll();
    cout<<"Sum of all elements in Array : \n"<<iret;

    
    


    return 0;
}