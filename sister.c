#include<stdio.h>
int main()
{
    int number,z=1;
    printf("enter a number: ");
    scanf("%d", &number);

    while(z<=10)
    {
        printf("%d*%d=%d\n",z,number,z*number);
        z++;
    }
    return 0;
}