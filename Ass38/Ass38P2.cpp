//write generic program to find largest number from three numbers

#include<iostream>
using namespace std;

template <class T>
T Max(T no1,T no2,T no3)
{
    if( no1 > no2 && no1 > no3)
    {
        return no1;
    }
    else if(no2 > no1 && no2 > no3)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

int main()
{
    int iret = 0;
    float fret = 0.0f;

    iret = Max(10,20,15);   
    cout<<"Max is : "<<iret<<"\n";

    fret = Max(10.89f,20.23f,15.32f);
    cout<<"Max is : "<<fret;
    return 0;
}