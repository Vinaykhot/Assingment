#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch1)
{
    
      
    if(ch1 == ('@') || ch1 == ('!') || ch1 == ('#') || ch1 == ('$') || ch1 == ('%') || ch1 == ('^') || ch1 == ('&') || ch1 == ('*'))
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
    printf("Enter the Character :- \n");
    scanf("%c",&cvalue);
    bret = ChkSpecial(cvalue);
    if(bret == TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");
    }

    return 0;
}