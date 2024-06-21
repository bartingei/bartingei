//program for pass/fail
#include<stdio.h.>
int main()
{
	int marks;
	printf("enter marks scored: ");
	scanf("%d",& marks);
	if(marks>100 || marks<0)
	{
		printf("warning: marks out of range\n");
		
	}
    else if(marks>=40)
    {
    	printf("passed\n");
	}
	else if(marks<40)
	{
		printf("fail\n");
	}
	return 0;
}
