#include<stdio.h>

int Difference(char *str)
{
    int iCap = 0;
    int ismall = 0;

    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
        iCap++;
       }
       else if((*str >= 'a') && (*str <= 'z')) 
       {
        ismall++;
       }
       str++;
    }
    return iCap - ismall;
}

int main()
{
    char arr[20];
    int iret = 0;

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    iret = Difference(arr);
    if( iret < 0)
    {
        iret = -iret;
    }

    printf("%d\n",iret);

    return 0;
}