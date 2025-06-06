#include<stdio.h>

void DisplayASCII(char ch)
{
    char ch1 = '\0';
    
    for(ch1 = 0; ch1 <= 126;ch1++)
    {   
        if((ch >= 'A') && (ch <= 'Z'))
        {
            ch++;
            
            printf("%c\t",ch);
            
       
        }
        else if((ch >= 'a') && (ch <= 'z'))
        {
           printf("%c\t",ch--); 
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