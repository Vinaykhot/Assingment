//write generic program to accept N values from user and return Maximum of that values

#include<iostream>
using namespace std;

template <class T>
T Maximum(T * arr,int Size)
{
    T max = 0;

    int i = 0;
    if(arr == NULL)
    {
        return -1;
    }

    max = arr[0];
    for(i = 0; i < Size ; i++)
    {
        if(max < arr[i] )
        {
            max =  arr[i];
        }
    }

    return max;

}

int main()
{
    int Sum = 0;
    float fsum = 0;
    int arr[] = {10,20,80,40,50};

    float brr[] = {10.89,20.87,30.67,40.56,50.45};
    
  

    Sum = Maximum(arr,5);   
    cout<<"Maximum is : "<<Sum<<"\n";

    fsum = Maximum(brr,5);   
    cout<<"Maximum is : "<<fsum<<"\n";

    
    return 0;
}