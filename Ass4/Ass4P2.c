#include<stdio.h>
void FactRev(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }
    
    int icnt = 0;
    
    for(icnt=(iNo/2);icnt >= 1;icnt--)
    {
        if((iNo % icnt) == 0)
        {
            printf("Factors is %d\n",icnt);
        }
    }
   
}

int main()
{
    int ivalue = 0;
    

    printf("Enter Number :- ");
    scanf("%d",&ivalue);

    FactRev(ivalue);
 

    return 0;

}