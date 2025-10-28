//Write Generic Program to accept  N values and search first of any specific values.
//input : 10 20 30 10 30 40 10 40 10
//value to search : 40
//
//output : 6


#include<iostream>
using namespace std;

template <class T>
T Search(T *arr,int Size,T iNo)
{
    int i = 0 ,cnt = 0;

    for(i = 0; i < Size; i++)
    {
        if(arr[i] == iNo)
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


int main()
{
   int iret = 0;
   float bret = 0;

   int arr[] = {10,20,30,10,30,40,10,40,10};

   iret = Search(arr,9,40);
   cout<<"First Occurence of 40 is : "<<iret<<"\n";

   float brr[] = {10.76f,20.87f,30.32f,10.87f,30.43f,40.45f,10.23f,40.00f,10.87f};

   bret = Search(brr,9,40.00f);
   cout<<"First Occurence of 40.00 is : "<<bret<<"\n";
  


    return 0;
}