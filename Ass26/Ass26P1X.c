//Problem : Check Wheather the character is present in string or not
//input : Marvellous Multi Os
//char : m

//output : True
#include<stdio.h>
#include<stdbool.h>
//Case Insensitive

bool chkchar(char *str,char ch)
{
    int idisplacement = 0;
    if((ch >= 'A') && (ch <= 'Z'))
    {
       idisplacement = 32; 
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
       idisplacement = -32; 
    }
    else
    {
       idisplacement = 0; 

    }

    
    while(*str != '\0')
    {
        if((*str == ch) || (*str == ch + idisplacement))
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char arr[50] = {'\0'};
    char cvalue ='\0';
    bool bret = false;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character:\n");
    scanf(" %c",&cvalue);

    bret = chkchar(arr,cvalue);
    if(bret == true)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not found");
    }


    
    return 0;
}