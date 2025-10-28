//problem : Convert the String in Lower case to Upper

//input : Marvelous Multi OS
//output : MARVELLOUS MULTI OS
#include<stdio.h>

void struprX(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
         
}

int main()
{
    char arr[20];

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    struprX(arr);
    printf("Updated String is :%s\n",arr);

    return 0;
}