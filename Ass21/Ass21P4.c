/* 
problem:-Accecpt N number  from user and display all such number which contain 3 digit  
N = 6
Elements:- 8225 665 3 76 953 858

output:- 665 3 76 953 858

*/

#include<stdio.h>
#include<stdlib.h>


void Digit(int arr[],int iLength)
{
    int icnt = 0;
    for(icnt = 0;icnt< iLength;icnt++)
    {   
        while(arr[icnt] != 3)
        {
            printf("%d\t",arr[icnt]);
        }
        
    }

} 

int main()
{
    int isize = 0,icnt = 0;
    int iret = 0;
  
    int *p = NULL;

    printf("Enter the Size Of Array :-\n");
    scanf("%d",&isize);

    p=(int *)malloc(isize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable allocate the memory");
        return -1;

    }

    
    printf("Enter %d elements\n",isize);

    for(icnt = 0;icnt < isize;icnt++)
    {
        printf("Enter element %d:- ",icnt+1);
        scanf("%d",&p[icnt]);
    }

    Digit(p,isize);
 
    


    free(p);

    return 0;

} 