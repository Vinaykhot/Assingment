#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if ((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
  int  iValue=0;
    BOOL iRet=FALSE;

    printf("Enter Your No.:- ");
    scanf("%d",&iValue);

    iRet=Check(iValue);

    if ( iRet == TRUE)
    {
        printf("This No is Divisible by 5");
    }
    else
    {
        printf("This No not is Divisible by 5");
    }
    


    
    return 0;
}