#include<Stdio.h>

float RectArea(float Width,float height)
{
    
    float Area = 0.0f;
    
    Area = Width * height;
    
    return Area;
    
}

int main()
{
    float fvalue1 = 0.0f,fvalue2 = 0.0f;
    double dret  = 0.0;

    printf("Enter Width :- \n");
    scanf("%f",&fvalue1);

    printf("Enter Height :- \n");
    scanf("%f",&fvalue2);

    dret = RectArea(fvalue1,fvalue2);
    printf("Area of Rectangle is:- %f",dret);
    return 0;
}