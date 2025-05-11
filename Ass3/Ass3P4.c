#include<stdio.h>
#include<stdbool.h>

char DisplayConvert(char cAlpha)
{
    
    char cLower=tolower(cAlpha);
    printf("UPPER to lower %c",cLower);
   
}
int main()
{
    char cValue='\0';
    

    printf("Enter Character:- ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


    return 0;

}