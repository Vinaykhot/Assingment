//Check wheather 1st bit and 30th bit is ON/OFF; 
#include<iostream>
using namespace std;
typedef unsigned int UINT;


bool ChkBit(UINT iNo , UINT ipos1 ,UINT ipos2)
{
   bool bResult = 0;
   

   UINT imask1 = 1;
   UINT imask2 = 1;
 
   UINT imask = 1;

   imask1 = imask1 << (ipos1 - 1);
   imask2 = imask2 << (ipos2 - 1);
   
   imask = imask1 + imask2 ;

   bResult = iNo & imask;
   
   

   return bResult;
    


      
}

int main()
{
    int iValue = 0,iLocation1 = 0,iLocation2 = 0,iLocation3 = 0;
    bool bret = false;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    cout<<"Entert the position : \n";
    cin>>iLocation1;

    cout<<"Entert the position : \n";
    cin>>iLocation2;

    

    bret = ChkBit(iValue,iLocation1,iLocation2);

   if(bret == true)
    {
        cout<<"1st bit and 30th bit is On";

    }
    else
    {
        cout<<"1st bit and 30th bit is OFF";
    }





    return 0;

}