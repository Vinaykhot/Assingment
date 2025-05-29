#include<stdio.h>
void NonFact(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }
    
    int icnt=0;

    for(icnt = 1;icnt <= iNo;icnt++)
    {   if((iNo % icnt) != 0)
        {
        printf("%d",icnt);
        }
    }
   
}

int main()
{
    int ivalue = 0;
    

    printf("Enter Number :- ");
    scanf("%d",&ivalue);

    NonFact(ivalue);
 

    return 0;

}