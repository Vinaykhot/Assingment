#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {  
        if((iNo % 10) == 0)
        {
            return TRUE;
        }
        

        iNo = iNo / 10 ;
    }
}
int main()
{
    int ivalue = 0;
    BOOL iret = FALSE;

    printf("Enter Number :-\n");
    scanf("%d",&ivalue);

    iret = ChkZero(ivalue);
    if(iret == TRUE)
    {
        printf("It Contain Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}