//problem :- write application which accept file name from user and Count the Number of Small character from the file.
//Input : Demo.txt
//Output : Number of Small character
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountSmall(char fname[])
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
        if((*buff >= 'a') && (*buff <= 'z'))
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

    iret = CountSmall(fname);
    printf("Number Of Small charachter are : %d\n",iret);
    return 0;
}