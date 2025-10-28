//problem :- write application which accept file name from user and one string from user.Write that string at end of the file.
//Input : Demo.txt
//Output : Display All Data

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char fname[20] = {'\0'};
    int fd = 0,iret = 0,isum = 0;
    char buff[1024]=  {'\0'};
    char str[50] = {'\0'};

    

    printf("Enter the String:\n");
    scanf("%[^'\n']s",str);

    printf("Enter the file name:\n");
    scanf("%s",fname);

    fd = open(fname,O_RDONLY | O_APPEND);





    if(fd == -1)
    {
        printf("File unable to read\n");
    }
    else
    {
       while((iret = read(fd,buff,sizeof(buff))) !='\0')
       {
            
           
           write(1,buff,iret);

       }
       
    }
    printf(str);

    
    

    

    return 0;


}