#include<Stdio.h>

float FhToCs(float ftemp)
{
    float fcelcius = 0.0f;

    fcelcius = ((ftemp -32) * (5.0/9.0));

    return fcelcius;

}

int main()
{
    
    float fvalue = 0.0f;
    double dret = 0.0f;

    printf("Tempreature in Farenheit :- \n");
    scanf("%f",&fvalue);

    dret= FhToCs(fvalue);
    printf("Tempreature in Celcius is :- %f\n",dret);
    return 0;
}