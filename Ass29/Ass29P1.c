//problem :- write application which accept file name from user and Count the Number of CAPITAL character from the file.
//Input : Demo.txt
//Output : Number of Capital character
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountCapital(char fname[])
{
    int fd = 0,iCount = 0,iret = 0;
    char buff[1024] = {'\0'};

    if(fd == -1)
    {
        return -1;
    }

    fd = open(fname,O_RDONLY);
    
    while((iret = read(fd,buff,sizeof(buff))) != '\0')
    {
        if((*buff >= 'A') && (*buff <= 'Z'))
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

    printf("Enter the file name :\n");
    scanf("%s",&fname);

    iret = CountCapital(fname);
    printf("Number Of capita charachter are : %d\n",iret);
    return 0;
}