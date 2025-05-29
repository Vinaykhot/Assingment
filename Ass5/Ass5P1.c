//input = 3
//output = $ * $ * $ *


#include<stdio.h>
void Pattern(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo ; icnt++)
    {
        printf("$\t *\t");
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