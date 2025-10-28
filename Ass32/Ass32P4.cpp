//Toggled Bit of given Number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

int ToggleBit(UINT iNo , UINT pos)
{
    
    UINT imask = 1;
    UINT iResult = 0;

    imask = imask << (pos - 1);
    //imask = ~imask;

    iResult = iNo ^ imask;

    return iResult;

}

int main()
{ 
    UINT ivalue = 0;
    UINT iloc = 0;
    int iret = 0;

    cout<<"Enter the Number : "<<"\n";
    cin>>ivalue;

    cout<<"Enter the Positioin : "<<"\n";
    cin>>iloc;

    iret = ToggleBit(ivalue,iloc);

    cout<<"\nUpdated Number : "<<iret;

    return 0;
}