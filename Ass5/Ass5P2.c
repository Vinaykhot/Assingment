//input = 8
//output = 1 2 3 4 5 6 7 8


#include<stdio.h>
void Pattern(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo ; icnt++)
    {
        printf("%d\t",icnt);
    }
}



int main()
{
    int ivalue = 0;

    printf("Enter the frequency :- ");
    scanf("%d",&ivalue);
    
    Pattern(ivalue);
    return 0;
}