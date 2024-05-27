#include<stdio.h>
int main()
{
    int i;


    for( i=0; i<=100; i++);
    {
        do
        {
            printf("%d\t", i);
            i++;

        }
        while(i % 2 == 0);
    }  
    return 0;
}