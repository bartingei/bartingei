#include<stdio.h>
int main()
{
    int number;
    int i;
    printf("enter a number\n");
    scanf("%d", &number);

    for(i = 0; i<= 10; i++);
    {
        printf(" %d * %d = %d\n", number, i, number * i);

    }

    

    return 0;

}