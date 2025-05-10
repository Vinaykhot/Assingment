#include<stdio.h>

void Display(int iNo,int iFreq)
{ 
    
    int iCnt=0;
    for(iCnt=1;iCnt<=iFreq;iCnt++)
    {
        printf("%d\n",iNo);
    }

}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter Number:-");
    scanf("%d",&iValue);

    printf("Enter Count Of print;-");
    scanf("%d",&iCount);

    Display(iValue,iCount);


    return 0;
}