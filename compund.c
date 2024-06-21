// 
#include<stdio.h>
int main(void)
{
    int  years;
    float compoundinterest , principleammount , interest;
    const float interestrate=0.1;

    printf("enter principle ammount\n");
    scanf("%f", &principleammount);

    printf("enter the number of years\n");
    scanf("%d", &years);

    for ( int i = 1; i <= years; i++)
    {
       interest = principleammount * interestrate ;
       printf("year %d interest is: %.2f\n", i, interest );

       principleammount += interest;
       
       compoundinterest += interest;
     }

     printf("the compound interest is %.2f\n", compoundinterest);

    return 0;
}