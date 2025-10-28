//write generic program to accept N values from user and return addition of that values

#include<iostream>
using namespace std;

template <class T>
T AddN(T * arr,int Size)
{
    T isum = 0;

    int i = 0;
    if(arr == NULL)
    {
        return -1;
    }

    for(i = 0; i < Size ; i++)
    {
        
        isum = isum + arr[i];
    }

    return isum;

}

int main()
{
    int Sum = 0;
    float fsum = 0;
    int arr[] = {10,20,30,40,50};

    float brr[] = {10.89,20.87,30.67,40.56,50.45};
    
  

    Sum = AddN(arr,5);   
    cout<<"Addition is : "<<Sum<<"\n";

    fsum = AddN(brr,5);   
    cout<<"Addition is : "<<fsum<<"\n";

    
    return 0;
}