#include<stdio.h>
int main()
{
    int i, j;

    printf("enter first number\n:");
    scanf("%d", &i);

    printf("enter the second number\n:");
    scanf("%d", &j);

    do
    {
       printf("invalid input!!");
    } while (i% 2 != 0 && j % 2 != 0);
    

    if(i < j)
    {
        printf("the largest number id %d\n",j);
    }

    else 
    {
        printf("the smallest number id %d\n",i);
    }
    

    return 0;
}