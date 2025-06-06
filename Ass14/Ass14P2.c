/*
Output:- 2  4   6   8   
         1  3   5   7   
         2  4   6   8   
         1  3   5   7   


*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,num = 0;
    
   

    for(i= 1;i <= iRow;i++)
    {
       for(j=1,num = 1;j<=iCol;j++,num++)
       {   
            if((i % 2) != 0)
            {
                printf("%d\t",num+j);
            }
            else
            {
                printf("%d\t",(num+j)-1);
            }
        
            
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