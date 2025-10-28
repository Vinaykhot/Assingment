#include<stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt)
{
    

    while((*src != '\0') && (iCnt != 0))
    {
        
        
            *dest = *src;
            src++;
            dest++; 
            iCnt--;
        
        
    }

}

int main()
{
    char arr[30] = "Marvellous Infosystem";
    char brr[30] = {'\0'};
    
    StrNCpyX(arr,brr,10);

    printf("%s",brr); 

    return 0;
}