#include<stdio.h>

void Display(int iNo)
{
    int i =0;
    
    for(i= 1;i <=iNo ; i++)
    {
        printf("*\t");
        
    }
    for(i= 1;i <=iNo ; i++)
    {
        printf("#\t");
        
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter Numer:- \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;


}