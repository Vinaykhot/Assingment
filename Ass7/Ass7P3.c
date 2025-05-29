#include<stdio.h>

int EvenFactorial(int iNo)
{
    int icnt = 0,ifact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt <= iNo; icnt++)
    {
        if((icnt % 2) == 0)
        {
            ifact = ifact * icnt;
        }
        
    }
    return ifact;
   
}
int main()
{
    int ivalue = 0,iret = 0;

    printf("Enter Numer:- \n");
    scanf("%d",&ivalue);

    iret=EvenFactorial(ivalue);
    printf("Even factorial is :- %d\n",iret);

    return 0;


}