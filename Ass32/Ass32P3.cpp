//If Bit is Off , ON the bit of given Number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

int OnBit(UINT iNo , UINT pos)
{
    
    UINT imask = 1;
    UINT iResult = 0;

    imask = imask << (pos - 1);
    //imask = ~imask;

    iResult = iNo | imask;

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

    iret = OnBit(ivalue,iloc);

    cout<<"\nUpdated Number : "<<iret;

    return 0;
}