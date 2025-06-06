#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    

    if((ch >= 'A') && (ch <= 'Z'))
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

    bret = ChkCapital(cvalue);
    if(bret == TRUE)
    {
        printf("It is Capital Character");

    }
    else
    {
        printf("It is not Capital Character");

    }

    return 0;
}
