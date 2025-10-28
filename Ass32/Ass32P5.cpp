//Toggled Bit 1st and last of Nibble of given Number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

int ToggleBit(UINT iNo )
{
    
    UINT imask1 = 0xf + iNo;
    UINT iResult = 0;
    

    imask1 = (imask1 << 4) ;

    iResult = iNo ^ imask1;

    UINT imask2 = 0xf + iNo;

    imask2 = imask2 >> 0;

    iResult = iResult ^ imask2;
      


    return iResult;

}

int main()
{ 
    UINT ivalue = 0;
   
    int iret = 0;

    cout<<"Enter the Number : "<<"\n";
    cin>>ivalue;

    
    iret = ToggleBit(ivalue);

    cout<<"\nUpdated Number : "<<iret;

    return 0;
}