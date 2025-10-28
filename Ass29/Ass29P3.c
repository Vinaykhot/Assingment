//problem :- write application which accept file name from user and Count the Number of White_Spaces from the file.
//Input : Demo.txt
//Output : Number of White_Spaces
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
        if((*buff == ' '))
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
    printf("Number Of Whilte_Spaces are : %d\n",iret);
    return 0;
}