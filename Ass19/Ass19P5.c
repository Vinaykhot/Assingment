/* 
problem:- Return the frequency of 11 in array and Display
N = 6
Elements:- 85 66 3 66 93 88
output1:- 0

Elements:- 85 11 3 15 11 111
output2:- 2
*/



#include<stdio.h>
#include<stdlib.h>



int Frequency(int arr[],int iLength,int iNo)
{
    int icnt=0;
    int iCount =0;
    
    
    
    for(icnt = 0;icnt < iLength;icnt++)
    {
        if(arr[icnt] == iNo)
        {
           iCount++;
        }
        
  
    }
   return iCount;
    
} 

int main()
{
    int isize = 0,icnt = 0,ifreq =0 ;
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

    printf("Enter the value : \n");
    scanf("%d",&ifreq);
    
    iret = Frequency(p,isize,ifreq);
    printf("frequency of %d in array are : %d",ifreq,iret);
   
    

    free(p);

    return 0;

}