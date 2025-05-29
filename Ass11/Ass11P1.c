#include<stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    int icnt = 0;

    for (icnt = 1;icnt <= iNo; icnt++,ch++)
    {
        printf("%c\t",ch);
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