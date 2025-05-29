#include<Stdio.h>

float SfToSm(float fNo)
{
    
    double fSquaremeter = 0.0;

    fSquaremeter = fNo * 0.0929;
    return fSquaremeter;
    
}

int main()
{
    
    float fvalue = 0.0f;
    double fret = 0.0;

    printf("Enter SquareFeet :- \n");
    scanf("%f",&fvalue);

    fret = SfToSm(fvalue);
    printf("Square meter is :- %f",fret);
    return 0;
}