//problem :- write application which accept file name and one count from user and read that number of character from starting position
//Input : Demo.txt
//Output : Display first 12 character from file
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplayN(char fname[],int isize)
{
    int fd = 0,iret= 0;
    char buff[1024] = {'\0'};

    fd = open(fname,O_RDONLY);

    
    
    while((iret = read(fd,buff,50)) != isize)
    {
      write(1,buff,iret);
      memset(buff,0,sizeof(buff));

    }
   
    


}

int main()
{
    char fname[50] = {'\0'};
   
    int ivalue = 0;

    printf("Enter the file name :\n");
    scanf("%s",fname);

    printf("Enter the count :\n");
    scanf("%d",&ivalue);

    DisplayN(fname,ivalue);
    
    return 0;
}