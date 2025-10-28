//write generic program to multiply two numbers

#include<iostream>
using namespace std;

template <class T>
T Multiple(T no1,T no2)
{
    T Ans ;
    Ans = no1 * no2;

    return Ans;
}


int main()
{
    int iret = 0;
    float fret = 0.0f;

    iret = Multiple(10,20);   
    cout<<"Multiplication is : "<<iret<<"\n";

    fret = Multiple(10.89f,20.23f);
    cout<<"Multiplication is : "<<fret;
    return 0;
}