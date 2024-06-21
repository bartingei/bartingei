#include<stdio.h>
int main()
{
	int maths, eng, total, average;
	printf("what is your maths marks: ");
	scanf("%d",&maths);
	printf("what is your eng marks: ");
	scanf("%d",&eng);
	total=maths+ eng;
	average=total/2;
	printf("maths=%d\n,eng=%d\n,total=%d\n,average=%d\n",maths,eng,total,average);
	return 0;
}
