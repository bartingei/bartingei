#include<stdio.h>
int main()
{
    int i;
    printf("\n even numbers between 50 and 100\n\n ");
    for (i=50; i<=100; i++)
    {
        if (i%2==0)
        {
            printf("\t%d", i);
        }
    }
    return  0;
}








