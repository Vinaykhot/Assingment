/* 
problem:-Check wheather 11 present or not in array and Display
N = 6
Elements:- 85 66 11 80 93 88
output1:- 11 is present

Elements:- 85 66 3 80 93 88
output2:- 11 is Absent
*/



#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL Check(int arr[],int iLength)
{
    int icnt=0;
    BOOL bFlag = FALSE;
    
    
    
    for(icnt = 0;icnt < iLength;icnt++)
    {
        if(arr[icnt] == 11)
        {
            bFlag = TRUE;
            break;
        }
        
  
    }
   return bFlag;
    
} 

int main()
{
    int isize = 0,icnt = 0;
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
    
    bret = Check(p,isize);
    if(bret == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
   
    

    free(p);

    return 0;

}