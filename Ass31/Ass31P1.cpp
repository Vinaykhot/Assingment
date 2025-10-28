//OFF the 7th Bit of User given NUmber
#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT ipos)
{
    UINT imask = 1;
    UINT iResult = 0;

    imask = imask << (ipos - 1);
    imask = ~imask;

    iResult = iNo & imask;

    return iResult; 

}



int main()
{
    UINT ivalue = 0;
    UINT iLocation = 0;
    UINT iret = 0;

    cout<<"Enter the Value : \n";
    cin>>ivalue;

    cout<<"Enter the bit Location : \n";
    cin>>iLocation;

    iret = OffBit(ivalue,iLocation);
    cout<<"Updated Number"<<"\n"<<iret;

    
    return 0;
}
