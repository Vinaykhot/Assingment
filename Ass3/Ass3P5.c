#include<stdio.h>
#include<stdbool.h>

bool CheckVowels(char cAlpha)
{
    
    if ((cAlpha=='a' || cAlpha=='e' || cAlpha=='o' || cAlpha=='i' || cAlpha=='u'))
    {
        return true;
    }
    else
    {
        return false;
    }
   
}
int main()
{
    char cValue='\0';
    bool bret=false;

    printf("Enter Character:- ");
    scanf("%c",&cValue);

    bret=CheckVowels(cValue);

    if(bret == true)
    {
        printf("%c character is Vowel",cValue);
    }
    else
    {
        printf("%c character is Not Vowel",cValue);
    }

    return 0;

}