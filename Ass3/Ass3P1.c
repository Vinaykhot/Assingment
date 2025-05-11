#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        printf("INVALID VALUE");
    }
    int icnt=0;
    int inum=2;
    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\n",inum);
        inum = inum + 2;

    }
}
int main()
{
    int iValue=0;

    printf("Enter Number:-");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}