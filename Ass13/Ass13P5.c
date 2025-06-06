#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,n = 1;
    
   

    for(i= 1;i <= iRow;i++)
    {
        for(j=1 ;j <= iCol;j++,n++)
        {
           printf("%d\t",n);
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