/*  output:- * * * *
             * # * *
             * * $ *
             * * * *
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    if( iRow != iCol)
    {
        printf("INVALID INPUT");
        return;
    }

    for(i = 1;i <= iRow;i++)
    {
        for(j = iCol;j >= 1;j--)
        {   
            
            if((j == 1)||(j == iCol)||(i == 1)||(i == iRow)||(i == j))
            {
                printf("*\t");
            }
            else if(i<j)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
            
            
        }
        printf("\n");
    }
}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("Enter the Row :- \n");
    scanf("%d",&ivalue1);

    printf("Enter Column :- \n");
    scanf("%d",&ivalue2);

    Pattern(ivalue1,ivalue2);

    return 0;

}