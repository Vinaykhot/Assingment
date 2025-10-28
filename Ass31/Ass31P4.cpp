//ToggleBit the 7th and 10th of that Number
#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT ipos1,UINT ipos2)
{
    UINT imask1 = 1;
    UINT imask2 = 1;

    UINT imask = 1;
    UINT iResult = 0;

    imask1 = imask1 << (ipos1 - 1);
    imask2 = imask2 << (ipos2 - 1);

   

    imask = imask1 + imask2;

    

    iResult = iNo ^ imask;

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

    cout<<"Enter the bit Location : \n";
    cin>>iLocation2;

    iret = ToggleBit(ivalue,iLocation1,iLocation2);
    cout<<"Updated Number"<<"\n"<<iret;

    
    return 0;
}
