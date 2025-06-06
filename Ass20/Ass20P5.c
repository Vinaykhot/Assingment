/* 
problem:- display the product all Odd numbers from array 
N = 6
Elements:- 15 66 3 76 98 88

output:- 45



*/



#include<stdio.h>
#include<stdlib.h>


int Range(int arr[],int iLength)
{
    int icnt=0;
    int iprod = 1;
    
    
    for(icnt = 1;icnt < iLength ; icnt++)
    {
        if((arr[icnt] % 2) != 0)
        {
            iprod = arr[icnt] * iprod;
        } 
    }
    return iprod;
    
   
    
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

    iret = Range(p,isize);
    printf("%d\n",iret);
    


    free(p);

    return 0;

}