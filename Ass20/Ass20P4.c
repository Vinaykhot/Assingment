/* 
problem:- Accecpt the range and display values between range from array 
N = 6
Elements:- 85 66 3 76 93 88
start - 60
end  - 90
output:- 85 66 76 



*/



#include<stdio.h>
#include<stdlib.h>


void Range(int arr[],int iLength,int istart,int iend)
{
    int icnt=0;
    
    
    for(icnt = 1;icnt < iLength ; icnt++)
    {
        if((istart <= arr[icnt]) && (iend > arr[icnt]))
        {
          printf("%d\t",arr[icnt]);  
        }
    }
    
   
    
} 

int main()
{
    int isize = 0,icnt = 0,ivalue1 =0,ivalue2=0 ;
  
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

    printf("Enter the Number : \n");
    scanf("%d%d",&ivalue1,&ivalue2);
    
    Range(p,isize,ivalue1,ivalue2);
    


    free(p);

    return 0;

}