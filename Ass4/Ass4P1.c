#include<stdio.h>
int MultFact(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }
    
    int icnt = 0;
    int isum = 1;

    for(icnt=1;icnt <= (iNo/2);icnt++)
    {
        if((iNo % icnt) == 0)
        {
            isum = isum * icnt;
            printf("Factors is %d\n",icnt);
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

    iret = MultFact(ivalue);
    printf("%d",iret);

    return 0;

}