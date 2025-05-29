#include<Stdio.h>

float CircleRadius(float fRadius)
{
    float PI = 3.14f;
    float Area = 0.0f;
    
    Area = PI * fRadius * fRadius;
    
    return Area;
    
}

int main()
{
    float fvalue = 0.0f;
    double dret  = 0.0;

    printf("Enter Radius :- \n");
    scanf("%f",&fvalue);

    dret = CircleRadius(fvalue);
    printf("Radius of Circle is :- %f",dret);
    return 0;
}