#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    

    if((ch >= '0') && (ch <= '9'))
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
    char cvalue = '\0';
    BOOL bret = FALSE;

    printf("Enter the Character: \n");
    scanf("%c",&cvalue);

    bret = ChkDigit(cvalue);
    if(bret == TRUE)
    {
        printf("It is Digit");

    }
    else
    {
        printf("It is not Digit");

    }

    return 0;
}
