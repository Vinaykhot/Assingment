/*
Output:- 1 2 3 4 
         2 3 4 5 
         3 4 5 6 
         4 5 6 7


*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,num=0;

    for(i= 1;i <= iRow;i++,num++)
    {
       for(j=1;j <= iCol ; j++)
       {
       
        printf("%d\t",num+j);
   
       }
       printf("\n");
        
    }
}

int main()
{
    int ivalue1 =0;
    int ivalue2 = 0;

    printf("Enter Row:\n");
    scanf("%d",&ivalue1);

    printf("Enter col:\n");
    scanf("%d",&ivalue2);

    Pattern(ivalue1,ivalue2);

    return 0;
}