#include<stdio.h>

int Devide(int iNo1,int iNo2)
{
    int iAns=0;
    if (iNo2 > iNo1)
    
    {
        return -1;
    }

    iAns = iNo1/iNo2;
    return iAns;

}
int main()
{
    int iValue1=15 , iValue2=5;
    int iret=0;

    iret=Devide(iValue1,iValue2);

    printf("Divisio is :- %d",iret);

    return 0;
}