//problem :- write application which accept file name from user and open that file read mode
//Input : Demo.txt
//Output : file opened Succesfully
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char fname[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name:\n");
    scanf("%s",fname);

    fd = open(fname,O_RDONLY);

    if(fd < 0)
    {
        printf("File unable to open\n");
    }
    else
    {
        printf("File Succesfully opened with fd : %d\n",fd);
    }

    return 0;


}