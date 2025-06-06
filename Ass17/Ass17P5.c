/*  output:- 1 2 3 4
             1 2   4
             1   3 4
             1 2 3 4
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
        for(j = 1;j <= iCol;j++)
        {   
           if((i == j)||(i == 1)||(i == iRow)||(j == 1)||(j == iCol))
           {
            printf("%d\t",j);
           } 
           else
           {
            printf(" \t");
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