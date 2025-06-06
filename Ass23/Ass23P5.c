#include<stdio.h>


void Display(char ch1)
{
    printf("%c\t %d\t %x\t %o\t",ch1,ch1,ch1,ch1);
}

int main()
{
    char cvalue = '\0';
    
    printf("Enter the Character :- \n");
    scanf("%c",&cvalue);
    Display(cvalue);
    

    return 0;
}