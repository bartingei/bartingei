//constant discount
#include<stdio.h>
int main ()
{
	int qty;
	float cost, uprice, D, payable;
    const float Discount=0.075;
	printf("what is the unit price: ");
	scanf("%f",& uprice);
	printf("how many items: ");
	scanf("%d",&qty);
	cost=qty*uprice;
	D=cost*Discount;
	payable=cost-D;
	printf("cost=%.2f\n, Discount=%.2f\n, amount payable=%.2f\n",cost, D,payable);
	return 0;
}
