#include<stdio.h>
int SumNonFact(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }
    
    int icnt=0;
    int isum=0;

    for(icnt = 1;icnt <= iNo;icnt++)
    {   if((iNo % icnt) != 0)
        {
        isum = isum + icnt;
       
        }
    }

    return isum;
   
}

int main()
{
    int ivalue = 0;
    int iret = 0;
    

    printf("Enter Number :- ");
    scanf("%d",&ivalue);

    iret = SumNonFact(ivalue);

    printf("%d\n",iret);
 

    return 0;

}