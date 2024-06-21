//here we write a program that displays all even numbers between 1 and 50
#include<stdio.h>
int main()
{
    int k;

    for(k=1;k<=50;k++)
    {
        if(k%2==0)
        {
            printf("%d\t",k);
        }
    }
    return 0;
    
}