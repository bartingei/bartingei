//program for trader
#include<stdio.h>
int main()
{
	float bprice, sprice, loss, profit;
	printf("enter the buying price: ");
	scanf("%f",&bprice);
	printf("enter selling price: ");
	scanf("%f", &sprice);
	if(bprice<=0 || sprice<=0)
	{
		printf("invalid amount!\n ");
	}
	else if(loss<profit)
	{
		printf("no loss made\n");
	}
	else if(profit<loss)
	{
		printf("no profit made\n");
	}
	else(bprice>=0 || sprice>=0);
	{
		printf("valid amount\n");
	}
	profit=sprice-bprice;
	loss=bprice-sprice;
	printf("bprice=%.2f\nsprice=%.2f\nprofit=%.2f\nloss=%.2f\n",bprice, sprice, profit, loss);
	return 0;
}
