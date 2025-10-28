//problem :- write application which accept file name and one character from user and Count the Number of Occurence of charachter in file
//Input : Demo.txt
//Output : Number of occurence of character
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountChar(char fname[],char ch)
{
    int fd = 0,iCount = 0,iret = 0;
    char buff[1024] = {'\0'};
    int displacement = 0;

    if(fd == -1)
    {
        return -1;
    }

    if((ch >= 'A') && (ch <= 'Z'))
    {
       displacement =  displacement + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        displacement = displacement - 32;
    }
    else
    {
       displacement = displacement + 0;
    }

    fd = open(fname,O_RDONLY);
    
    while((iret = read(fd,buff,sizeof(buff))) != '\0')
    {
        if((*buff == ch) || (*buff == ch + displacement   ))
        {
            iCount++;
        }
       
    }

    close(fd);

    return iCount;
    


}

int main()
{
    char fname[] = {'\0'};
    int iret = 0;
    char cvalue = {'\0'};

    printf("Enter the file name :\n");
    scanf("%s",fname);

    printf("Enter the Character :\n");
    scanf(" %c",&cvalue);

    iret = CountChar(fname,cvalue);
    printf("Number frequency : %d\n",iret);
    return 0;
}