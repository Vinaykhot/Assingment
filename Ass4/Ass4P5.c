#include<stdio.h>
int SumNonFact(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }
    
    int icnt=0;
    int ifact=0;
    int iNfact=0;
    int idiff=0;

    for(icnt = 1;icnt <= iNo;icnt++)
    {   if((iNo % icnt) == 0)
        {
            ifact= ifact + icnt;
        }

        else
        {
            iNfact = iNfact + icnt;
        }
    }
    idiff = ifact - iNfact;

    return idiff;
   
}

int main()
{
    int ivalue = 0;
    int iret = 0;
    

    printf("Enter Number :- ");
    scanf("%d",&ivalue);

    iret = SumNonFact(ivalue);
    if ( iret < 0)
    {
        iret = -iret;
    }
    printf("%d\n",iret);
 

    return 0;

}