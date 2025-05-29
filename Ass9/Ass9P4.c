#include<stdio.h>

int CountFour(int iNo)
{
    int icount = 0;

    while(iNo !=0)
    {
        if((iNo % 10) == 4)
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

    iret = CountFour(ivalue);
    printf("%d",iret);

    return 0;
}