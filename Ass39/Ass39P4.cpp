//Write Generic Program to accept  N values and search last of any specific values.
//input : 10 20 30 10 30 40 10 40 10
//value to search : 40
//
//output : 2


#include<iostream>
using namespace std;

template <class T>
T Search(T *arr,int Size,T iNo)
{
    int i = 0 ,cnt = 0;

    for(i = Size; i > 0; i--)
    {
        if(arr[i] == iNo)
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
        return ;
    }

}


int main()
{
   int iret = 0;
   float bret = 0;

   int arr[] = {10,20,30,10,30,40,10,40,10};

   iret = Search(arr,9,30);
   cout<<"First Occurence of 40 is : "<<iret<<"\n";

   float brr[] = {10.76f,20.87f,30.32f,10.87f,30.43f,40.45f,10.23f,40.00f,10.87f};

   bret = Search(brr,9,40.00f);
   cout<<"First Occurence of 40.00 is : "<<bret<<"\n";
  


    return 0;
}