#include<stdio.h>

int CountCapital(char *str)
{
    int icnt = 0;

    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
        icnt++;
       } 
       str++;
    }
    return icnt;
}

int main()
{
    char arr[20];
    int iret = 0;

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    iret = CountCapital(arr);

    printf("%d\n",iret);

    return 0;
}