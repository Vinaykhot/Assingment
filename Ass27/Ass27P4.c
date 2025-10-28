#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
    

    while(*src != '\0')
    {
        
        if((*src >= 'a') && ( *src <= 'z'))
        {
            *dest = *src;
             dest++;

        }
        src++;
            
           
        
        
    }

}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Enter Your String:\n");
    scanf("%[^'\n']s",arr);
    
    StrCpySmall(arr,brr);

    printf("%s",brr); 

    return 0;
}