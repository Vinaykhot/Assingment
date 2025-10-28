//Check wheather 5th Bit & 18th is On or OFF; 
#include<iostream>
using namespace std;
typedef unsigned int UINT;


bool ChkBit(UINT iNo , UINT iPos1,UINT ipos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT imask = 1;
    UINT bResult = 0;
    

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (ipos2 - 1);

    imask = iMask1 + iMask2;

    bResult = iNo & imask;

   return bResult;
    


      
}

int main()
{
    int iValue = 0,iLocation1 = 0,iLocation2 = 0;
    bool bret = false;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    cout<<"Enter the Location: \n";
    cin>>iLocation1;

    cout<<"Enter the Location: \n";
    cin>>iLocation2;

    bret = ChkBit(iValue,iLocation1,iLocation2);

   if(bret == true)
    {
        cout<<"5th & 18 bit is ON\n";

    }
    else
    {
        cout<<"5th and 18th bit is OFF\n";
    }





    return 0;

}