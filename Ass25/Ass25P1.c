#include<stdio.h>

void strlwrx(char *str)
{
    
        while(*str != '\0')
        {   

            if((*str >= 'A') && (*str <= 'Z'))
            {
                
            }
            *str++;
            printf("%d\t",  str);

        }
         
}

int main()
{
    char arr[20];

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    return 0;
}