//Write generic Program which accept one value and one number from user .Print that value number of times on screen.
//input : M 7
//output : M    M   M   M   M   M   M
//
//input : 11 3
//output : 11   11  11
//
//input : 3.7 6
//output : 3.7   3.7   3.7   3.7     3.7     3.7

#include<iostream>
using namespace std;

template <class T>
void Display(T value,int size)
{
    int i = 0;

    for(i = 0 ;i< size;i++)
    {
        cout<<value<<"\t";
    }
    cout<<"\n";
}


int main()
{
    Display('M',4);

    Display(3.7,4);

    Display(11,4);

    Display('V',4);

    return 0;
}