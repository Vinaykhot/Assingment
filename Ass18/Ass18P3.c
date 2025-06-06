/* 
problem:-even and  divisible by 5 number in array
N = 6
Elements:- 85 66 3 80 93 88
output:-  80
*/



#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iLength)
{
    int icnt=0;
    
    
    for(icnt = 0;icnt < iLength;icnt++)
    {
        if(((arr[icnt] % 2) == 0) && ((arr[icnt] % 5) == 0))
        {
            printf("%d\t",arr[icnt]);
        }
        
    }
    
} 

int main()
{
    int isize = 0,icnt = 0;
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
    
    Display(p,isize);
    

    free(p);

    return 0;

}