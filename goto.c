#include<stdio.h>
int man()

{
    int n;
    for (n=10; n>0; n--)
    {
        if(n==5) continue;
        printf("%d \t", n);
    }
   printf("FIRE!\n ");
   return 0; 
}