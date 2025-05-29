#include<stdio.h>

int CountOdd(int iNo)
{
    int icount = 0;
    int iDigit = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            icount++;
        }

        iNo = iNo / 10;
    }

    return icount;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter Number :- \n");
    scanf("%d",&ivalue);

    iret = CountOdd(ivalue);
    printf("%d",iret);

    return 0;
}