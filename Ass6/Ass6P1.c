#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Less");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium");     
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int ivalue = 0;
    
    printf("Enter the number");
    scanf("%d",&ivalue);

    Number(ivalue);

    
    return 0;
}