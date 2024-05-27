#include<stdio.h>
int main()
{
    int k , sum = 0;
    for ( k = 0; k < 10; k++)
    {
       if (k % 2 == 0)
       {
         printf("%d ", k++);

       }

    }

    sum = k + k;
    printf("\nsum of even numbers is : \t%d ", sum);
     return 0;
}