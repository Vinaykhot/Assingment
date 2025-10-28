//Toggle the  the 7th bit 
#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT ipos1)
{
    UINT imask1 = 1;
    
   
    UINT iResult = 0;

    imask1 = imask1 << (ipos1 - 1);
    
    iResult = iNo ^ imask1;

    return iResult; 

}



int main()
{
    UINT ivalue = 0;
    UINT iLocation1 = 0,iLocation2 = 0;
    UINT iret = 0;

    cout<<"Enter the Value : \n";
    cin>>ivalue;

    cout<<"Enter the bit Location : \n";
    cin>>iLocation1;

    iret = ToggleBit(ivalue,iLocation1);
    cout<<"Updated Number"<<"\n"<<iret;

    
    return 0;
}
