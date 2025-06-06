#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowels(char *str)
{
    BOOL bflag = FALSE;

    while(*str != '\0')
    {
       if((*str == 'a') || (*str == 'e')|| (*str == 'i') || (*str == 'o') || (*str == 'u'))
       {
        bflag = TRUE;
       }
       
       str++;
    }
    return bflag;
}

int main()
{
    char arr[20];
    BOOL bret = FALSE;

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    bret = ChkVowels(arr);
    if( bret == TRUE)
    {
       printf("Contain Vowels"); 
    }
    else
    {
        printf("there is no vowel");
    }

    

    return 0;
}