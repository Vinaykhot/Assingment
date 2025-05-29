#include<stdio.h>

int DollarToInr(int iNo)
{
    int iconvert = 0;

    iconvert = iNo * 70;

    return iconvert;
   
}
int main()
{
    int ivalue = 0,iret = 0;

    printf("Enter Numer:- \n");
    scanf("%d",&ivalue);

    iret=DollarToInr(ivalue);
    printf("Value in INR is :- %d\n",iret);

    return 0;


}