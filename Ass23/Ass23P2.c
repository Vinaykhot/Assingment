#include<stdio.h>

void DisplayASCII(char ch)
{
    char ch1 = '\0';
    
    for(ch1 = 0; ch1 <= 126;ch1++)
    {   
        if((ch >= 'A') && (ch <= 'Z'))
        {
            ch1 = 65 + 32;
            printf("%c",ch1);
            break;
        }
        else if((ch >= 'a') && (ch <= 'z'))
        {
            ch1 = 97 - 32;
            printf("%c",ch1);
            break; 
        }
        else
        {
            printf("%c",ch);
            break;
        }
    }
   
        

   
    
}

int main()
{
    char cvalue = '\0';
    printf("Enter the Character :- \n");
    scanf("%c",&cvalue);
    DisplayASCII(cvalue);

    return 0;
}