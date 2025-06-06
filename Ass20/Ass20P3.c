/* 
problem:- Return the Index value of last Occurence of  User value in array or not
N = 6
Elements:- 85 66 3 66 93 88
user value : 66
output1:- 1

Elements:- 85 11 3 15 11 111
user value : 12
output2:- -1

*/



#include<stdio.h>
#include<stdlib.h>


int Check(int arr[],int iLength,int iNo)
{
    int icnt=0;
    
    
    for(icnt = iLength;icnt > 0;icnt--)
    {
        if(arr[icnt] == iNo)
        {   
           
           break;
        }
        else
        {
            return -1;
        }
        
  
    }
    return icnt;
   
    
} 

int main()
{
    int isize = 0,icnt = 0,ivalue =0 ;
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

    printf("Enter the Number : \n");
    scanf("%d",&ivalue);
    
    iret = Check(p,isize,ivalue);
    printf("%d",iret);


    free(p);

    return 0;

}