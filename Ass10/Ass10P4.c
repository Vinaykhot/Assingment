#include<stdio.h>

int MultiDigit(int iNo)
{
    int icount = 0;
    int iDigit = 0;
    int imulti = 1;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        
        if(iDigit != 0)
        {
            imulti = imulti * iDigit;
        }

        iNo = iNo / 10;
    }

    return imulti;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter Number :- \n");
    scanf("%d",&ivalue);

    iret = MultiDigit(ivalue);
    printf("%d",iret);

    return 0;
}