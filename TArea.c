//write a program that calculates the area of a right angled triangle using functions.
//function area

#include<stdio.h>
float area(int L, int H);

int main()
{
    int height, base;
    float TArea;

    printf("enter the height and base of the triangle:");
    scanf("%d %d", &height, &base);

    TArea = area(base, height);

    printf("area = %.2f\n", TArea);

    return 0;
}

float area(int L, int H)
{
    return L * H /2;
}