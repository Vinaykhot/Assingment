#include<Stdio.h>

int KmToMet(int iNo)
{
    
    int imeter = 0;

    imeter = iNo * 1000;
    return imeter;
    
}

int main()
{
    
    int ivalue = 0;
    int iret = 0;

    printf("Enter Kilometer :- \n");
    scanf("%d",&ivalue);

    iret = KmToMet(ivalue);
    printf("Kilometer Into Meter is :- %d",iret);
    return 0;
}