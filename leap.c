// program that tell the user whether the input year is leap or not.
#include<stdio.h>
int main()
{
    int year;
    printf("input year of your choice\n: ");
    scanf("%d", &year);

    if(year<0 && year >10000)
    {
        printf("Invalid year");
    }

    else if (year %4==0)
    {
        printf("leap year:");
    }

    else if("year%4!=0")
    {
        printf("not a leap year:");
    }
    return 0;


}