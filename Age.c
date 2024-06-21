#include<stdio.h>
int main()
{
  
  int i=1;
do
{
    printf("the number is %d\n" , i);
    i++;
    if (i==5 )
{
    continue;
}

} while (i<=15);


  return 0;
}