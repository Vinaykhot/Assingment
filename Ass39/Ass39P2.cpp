//Write Generic Program to accept  N values and Count frequency of any specific values.
//input : 10 20 30 10 30 40 10 40 10
//value to chk frequency : 10
//
//output : 4


#include<iostream>
using namespace std;

template <class T>
T Frequency(T *arr,int Size,T iNo)
{
    int i = 0 ,cnt = 0;

    for(i = 0; i < Size; i++)
    {
        if(arr[i] == iNo)
        {
            cnt++;
        }
    }

    return cnt;
}


int main()
{
    int iret = 0,ivalue = 0;
    float bret = 0.0f,fvalue = 0.0f;
    int iSize = 0;

    cout<<"Enter the size of Array : \n";
    cin>>iSize;

    int *Arr = new int[iSize];

    cout<<"Enter the elements : \n";

    for(int i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Elements are : \n";

    for(int i = 0; i < iSize ; i++)
    {
        cout<<Arr[i]<<" ";
    }

    cout<<"\nEnter the value for find frequency : \n";
    cin>>ivalue;

    iret = Frequency(Arr,iSize,ivalue);
    cout<<"This is Frequency of "<<ivalue<<" : "<<iret<<"\n";

    float brr[] = {10.23f,20.6f,30.4f,10.23f, 10.23f};

    cout<<"\nEnter the value for find frequency : \n";
    cin>>fvalue;

    bret = Frequency(brr,iSize,fvalue);
    cout<<"This is Frequency of "<<fvalue<<" : "<<bret<<"\n";



    return 0;
}