/* 
problem :- Summation Difference between odd and Even
N = 6
Elements:- 85 66 3 80 93 88
output:- 53 
*/



#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int iLength)
{
    int icnt=0;
    int sum1=0,sum2=0;
    
    for(icnt = 0;icnt < iLength;icnt++)
    {
        if((arr[icnt] % 2) == 0)
        {
            sum1= sum1 + arr[icnt];
        }
        else 
        {
            sum2=sum2 + arr[icnt];
        }
    }
    return sum1 - sum2;
} 

int main()
{
    int isize = 0,icnt = 0,iret =0 ;
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

    iret = Difference(p,isize);
    printf("Result is :- %d",iret);

    free(p);

    return 0;

}