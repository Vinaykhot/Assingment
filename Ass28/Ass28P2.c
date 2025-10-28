//problem :- write application which accept file name from user and create the file.
//Input : Demo.txt
//Output : file created Succesfully
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char fname[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name:\n");
    scanf("%s",fname);

    fd = creat(fname,0777);

    if(fd < 0)
    {
        printf("File unable to create\n");
    }
    else
    {
        printf("File Succesfully created with fd : %d\n",fd);
    }

    return 0;


}