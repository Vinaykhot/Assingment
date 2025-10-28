#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
    while(*src != '\0' )
    {
        *dest = *src;
        src++;
        dest++;
    }

}

int main()
{
    char arr[30] = "Marvellous Infosystem";
    char brr[30] = {'\0'};
    
    StrCpyX(arr,brr);

    printf("%s",brr); 

    return 0;
}