//problem : Toggle the String 

//input : Marvelous Multi OS
//output : mARVELLOUS mULTI os
#include<stdio.h>

void strtoggleX(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
         
}

int main()
{
    char arr[20];

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    strtoggleX(arr);
    printf("Updated String is :%s\n",arr);

    return 0;
}