#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    

    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
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

    bret = ChkAlpha(cvalue);
    if(bret == TRUE)
    {
        printf("It is Character");

    }
    else
    {
        printf("It is not Character");

    }

    return 0;
}
