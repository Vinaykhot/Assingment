#include<stdio.h>

void DisplayASCII()
{
    char ch = '\0';
    printf("HEX\tDEC\tCHAR\t");
    for(ch = 0; ch <= 126;ch++)
    {
        printf("%d\t %c\n %x\t",ch,ch,ch);
    }
    
}

int main()
{
    DisplayASCII();

    return 0;
}