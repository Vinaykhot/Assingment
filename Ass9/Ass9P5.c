#include<stdio.h>

int Count(int iNo)
{
    int icount = 0;

    while(iNo !=0)
    {
        if((iNo % 10) < 6)
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

    iret = Count(ivalue);
    printf("%d",iret);

    return 0;
}