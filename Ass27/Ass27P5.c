#include<stdio.h>

void StrCatX(char *src,char *dest)
{
    

    while(*src != '\0')
    {
        src++;
    }
    
    while(*dest != '\0')
    {
         
        *src = *dest;
        src++;
        dest++;
       
       
    }

   
    *dest = '\0';

   
    

}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Enter Your String 1:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Your String 2:\n");
    scanf(" %[^'\n']s",brr);
    
    StrCatX(arr,brr);

    printf("%s",arr); 

    return 0;
}