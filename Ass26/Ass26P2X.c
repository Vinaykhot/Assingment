//Problem : Check Wheather the character is present in string or not & return the frequency
//input : Marvellous Multi Os
//char : M

//output : True
#include<stdio.h>


int Countchar(char *str,char ch)
{
    int icount = 0;
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
           icount++;
        }
        str++;
    }
    return icount;
   
}

int main()
{
    char arr[50] = {'\0'};
    char cvalue ='\0';
    int iret = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character:\n");
    scanf(" %c",&cvalue);

    iret = Countchar(arr,cvalue);
    printf("Character %c frequency is : %d",cvalue,iret);


    
    return 0;
}