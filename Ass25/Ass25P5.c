//problem : Count White Spaces 

//input : Marvellous Infosystem
//output : 1
#include<stdio.h>

int CountWhite(char *str)
{
    int icount = 0;
    while(*str != '\0')
    {
        if((*str == ' '))
        {
            icount++;
        }
        
        str++;
    }
    return icount;
         
}

int main()
{
    char arr[20];
    int iret = 0;

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    iret = CountWhite(arr);
    printf("White Spaces in String :%d\n",iret);

    return 0;
}