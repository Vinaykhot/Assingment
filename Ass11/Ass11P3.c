#include<stdio.h>

void Pattern(int iNo)
{
    
    int icnt = 0;

    for (icnt = 1;icnt <= iNo; icnt++)
    {
       printf("%d\t *\t",icnt);
    }
}

int main()
{   
    int ivalue= 0;

    printf("Enter Number of Elements \n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}