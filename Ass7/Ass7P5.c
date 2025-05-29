#include<stdio.h>

int FactorialDiff(int iNo)
{
    int icnt = 0,iEfact = 1,iOfact = 1,idiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt <= iNo; icnt++)
    {
        if((icnt % 2) != 0)
        {
            iOfact = iOfact * icnt;
        }

        if((icnt % 2) == 0)
        {
            iEfact = iEfact * icnt;
        }
        
    }

    idiff = iEfact - iOfact;
    return idiff;
   
}
int main()
{
    int ivalue = 0,iret = 0;

    printf("Enter Numer:- \n");
    scanf("%d",&ivalue);

    iret=FactorialDiff(ivalue);
    printf(" factorial Difference is :- %d\n",iret);

    return 0;


}