//Check wheather 15th Bit is On or OFF; 
#include<iostream>
using namespace std;
typedef unsigned int UINT;


bool ChkBit(UINT iNo , UINT iPos)
{
    UINT iMask = 1;
    UINT bResult = 0;
    

    iMask = iMask << (iPos - 1);

    bResult = iNo & iMask;

   return bResult;
    



}

int main()
{
    int iValue = 0,iLocation = 0;
    bool bret = false;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    cout<<"Enter the Location: \n";
    cin>>iLocation;

    bret = ChkBit(iValue,iLocation);

   if(bret == true)
    {
        cout<<"15th bit is ON\n";

    }
    else
    {
        cout<<"15th bit is OFF\n";
    }





    return 0;

}