//Write Generic Program to accept  N values and reverse content .
//input : 10 20 30 10 30 40 10 40 10
//
//
//output : 10 40 10 40 30 10 30 20 10


#include<iostream>
using namespace std;

template <class T>
void reverse(T *arr,int Size)
{
    int start;
    int end;

    start = arr[0];
    end = arr[Size];
    for(int i = 0 ; int < Size ; i++)
    {
        
    }

}


int main()
{

   int arr[] = {12,20,30,10,30,40,10,40,10};

   reverse(arr,9);
   
   for(int i = 0 ; i < 9; i++)
   {
        cout<<arr[i]<<"\t";
   }

//    float brr[] = {10.76f,20.87f,30.32f,10.87f,30.43f,40.45f,10.23f,40.00f,10.87f};

//    reverse(brr,9);
    return 0;
}