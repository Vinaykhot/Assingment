//problem :- write application which accept file name from user and read all data in file and Display the size of file...
//Input : Demo.txt
//Output : Size of file

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char fname[20] = {'\0'};
    int fd = 0,iret = 0,isum = 0;
    char buff[1024]=  {'\0'};

    printf("Enter the file name:\n");
    scanf("%s",fname);

    fd = open(fname,O_RDONLY);



    if(fd == -1)
    {
        printf("File unable to read\n");
    }
    else
    {
       while((iret = read(fd,buff,sizeof(buff))) !='\0')
       {
            
            isum = isum + iret;

       }
    }

    printf("\n File Size : %d",isum);

    

    return 0;


}