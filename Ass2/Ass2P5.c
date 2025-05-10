#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNO)
{
    if ((iNO % 2) == 0)
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
    int iValue=0;
    BOOL iRet=0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet=CheckEven(iValue);

    if((iRet==TRUE))
    {
        printf("Number %d is Even",iValue);
    
    }
    else
    {
        printf("Number is Odd");
    }
return 0;

}