#include<stdio.h>
#define PI  3.142

float Area( int r);
float circumference(int r);

int main()
{
    int radius;
    float Tcircumference, TArea; 


    printf("enter the radius of the circle\n:");
    scanf("%d", &radius);

    TArea = Area(radius);

    printf("Area = %.2f\n", TArea);

    Tcircumference = circumference(radius);
    
    printf("Circumference = %.2f\n",Tcircumference);

    return 0;
}

float Area(int r)
{
    return PI * r * r ;
}

float circumference(int r)
{
    return PI * 2 * r;
}


