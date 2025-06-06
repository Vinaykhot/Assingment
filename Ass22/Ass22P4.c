#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
    

    if((ch >= 'a') && (ch <= 'z'))
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

    bret = ChkSmall(cvalue);
    if(bret == TRUE)
    {
        printf("It is Small case ");

    }
    else
    {
        printf("It is not Small Case");

    }

    return 0;
}
