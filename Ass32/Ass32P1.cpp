//Check Whether Bit is ON or OFF on given Number
#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool ChkBit(UINT iNo , UINT pos)
{
    bool Bflag = false;
    UINT imask = 1;
    UINT iResult = 0;

    imask = imask << (pos -1);

    iResult = iNo & imask;

    if(iResult == imask)
    {
        Bflag = true;
    }

    return Bflag;

}

int main()
{ 
    UINT ivalue = 0;
    UINT iloc = 0;
    bool bret = false;

    cout<<"Enter the Number : "<<"\n";
    cin>>ivalue;

    cout<<"Enter the Positioin : "<<"\n";
    cin>>iloc;


    bret = ChkBit(ivalue,iloc);
    if(bret == true)
    {
        cout<<"\n Bit is On";
    }
    else
    {
        cout<<"\n Bit is Off";
    }

   


    
    
    
    return 0;
}