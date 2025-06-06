/* 
problem:-Count diferenec of odd and Even number in array and Display
N = 7
Elements:- 85 66 3 80 93 88
output:-  1
*/



#include<stdio.h>
#include<stdlib.h>

int CountEven(int arr[],int iLength)
{
    int icnt=0;
    int iCount1 =0 ,iCount2 = 0;
    
    
    for(icnt = 0;icnt < iLength;icnt++)
    {
        if((arr[icnt] % 2) == 0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
        
    }
    return iCount1 - iCount2;
    
} 

int main()
{
    int isize = 0,icnt = 0,iret = 0;;
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
    
    iret = CountEven(p,isize);
    printf("Frequency is : %d",iret);
    

    free(p);

    return 0;

}