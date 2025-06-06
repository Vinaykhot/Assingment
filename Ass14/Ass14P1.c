/*
Output:- 1 2 3 4
         5 6 7 8
         9 1 2 3
         4 5 6 7

*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,num = 1;
    
   

    for(i= 1;i <= iRow;i++)
    {
       for(j=1;j<=iCol;j++,num++)
       {
        if(num == 10)
        {
            num = 1;
        }
        printf("%d\t",num);
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