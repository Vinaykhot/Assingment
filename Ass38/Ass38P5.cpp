//write generic program to accept N values from user and return Maximum of that values

#include<iostream>
using namespace std;

template <class T>
T Minimum(T * arr,int Size)
{
    T min = 0;

    int i = 0;
    if(arr == NULL)
    {
        return -1;
    }

    min = arr[0];
    for(i = 0; i < Size ; i++)
    {
        if(min > arr[i] )
        {
            min =  arr[i];
        }
    }

    return min;

}

int main()
{
    int Sum = 0;
    float fsum = 0;
    int arr[] = {10,20,80,40,50};

    float brr[] = {10.89,20.87,30.67,40.56,50.45};
    
  

    Sum = Minimum(arr,5);   
    cout<<"Minimum is : "<<Sum<<"\n";

    fsum = Minimum(brr,5);   
    cout<<"Minimum is : "<<fsum<<"\n";

    
    return 0;
}