//Problem : accept the character  & return the index of first occurence of that charcter
//input : Marvellous Multi Os
//char : M

//output : 0
#include<stdio.h>


int FirstChar(char *str,char ch)
{
    int i = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {   
            
           break;
        }
        i++;
        str++;
    }
    return i; 
   
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

    iret = FirstChar(arr,cvalue);
    printf("Character %c location is : %d",cvalue,iret);


    
    return 0;
}