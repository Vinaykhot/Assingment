/* 
problem:- check wheather User value present in array or not
N = 6
Elements:- 85 66 3 66 93 88
user value : 66
output1:- 66 is present

Elements:- 85 11 3 15 11 111
user value : 12
output2:- 12 is not present

*/



#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Check(int arr[],int iLength,int iNo)
{
    int icnt=0;
    int iCount =0;
    BOOL bflag = FALSE;
    
    
    
    for(icnt = 0;icnt < iLength;icnt++)
    {
        if(arr[icnt] == iNo)
        {
           bflag = TRUE;
           break;
        }
        
  
    }
   return bflag;
    
} 

int main()
{
    int isize = 0,icnt = 0,ivalue =0 ;
    BOOL bret = 0;
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
    scanf("%d",&ivalue);
    
    bret = Check(p,isize,ivalue);
    if( bret == TRUE)
    {
        printf("%d is Present",ivalue);
    }
    else
    {
        printf("%d is not present",ivalue);
    }
   
    

    free(p);

    return 0;

}