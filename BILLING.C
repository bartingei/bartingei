//kenya power billing
#include<stdio.h>

int main()

{
	
	int units;
	float amount;
	printf("enter amount of units consumed: ");
	scanf("%d", &units);
	
	if(units<=100)
	{
		amount=200;
	}
	
	else if(units<=150)
	{
		amount=200+((units-100)*25);
	}
	
	else if(units<=200)
	{
		amount=200+(25*50)+((units-150)*20);
	}
	
	else if(units<=250)
	{
		amount=200+(25*50)+(20*50)+((units-200)*15);
	}
	else 
	{
		amount=200+(25*50)+(20*50)+(15*50)+((units-250)*10);
	}
	
	printf("units=%d\n,amount=%.2f\n",units,amount);
	return 0;
}