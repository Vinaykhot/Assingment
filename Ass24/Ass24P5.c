#include<stdio.h>


void ChkVowels(char *str)
{
   
    char crev[20];
    int icnt = 0 , i = 0;
    while(*str != '\0')
    {   
        str++;
        str[icnt] = *str;
        if(*str == '\0')
        {
            str--;
            printf("%c\t",*str);
        }
        
        
       
    }
    
    
   
}

int main()
{
    char arr[20];

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    ChkVowels(arr);

    return 0;
}