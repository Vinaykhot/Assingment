#include<stdio.h>

int CountSmall(char *str)
{
    int icnt = 0;

    while(*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
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

    iret = CountSmall(arr);

    printf("%d\n",iret);

    return 0;
}