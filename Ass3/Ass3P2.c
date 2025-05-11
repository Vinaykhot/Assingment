#include<stdio.h>

void EvenFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int icnt=0;
    for(icnt=1;icnt < iNo;icnt++)
    { 
        if(((iNo % icnt) == 0) && ((icnt % 2) == 0))
        {
            printf("%d\n",icnt);
        }
        
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number:-");
    scanf("%d",&iValue);

    EvenFactor(iValue);

    return 0;

}