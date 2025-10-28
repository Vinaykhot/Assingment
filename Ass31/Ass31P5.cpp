//ON the 1st 4 bits of number
#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{

    UINT imask = 0xf;
    UINT iResult = 0;

    //imask =imask << 3;

    iResult = iNo | imask;

    return iResult; 

}



int main()
{
    UINT ivalue = 0;
    UINT iLocation1 = 0,iLocation2 = 0;
    UINT iret = 0;

    cout<<"Enter the Value : \n";
    cin>>ivalue;



    iret = OffBit(ivalue);
    cout<<"Updated Number"<<"\n"<<iret;

    
    return 0;
}
