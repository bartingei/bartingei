//a program that takes in values btw 0 and 100 and it grades them.

#include<stdio.h>
int main()
 
{
  int mark;
  char grade;

  printf("enter the marks scored: \n ");
  scanf("%d", &mark);

  if(mark > 100 ||  mark < 0)
  {
    printf("invalid input ");
    scanf("%c", &grade);
  }


  else if(mark >=90 &&  mark <= 100)
  {
    printf("A");
    scanf("%c", &grade);
  }

  else if(mark >=80 &&  mark <= 89)
  {
    printf("B");
    scanf("%c", &grade);
  }
  else if(mark >=70 &&  mark <= 79)
  {
    printf("C");
    scanf("%c", &grade);
  }
  else if(mark >=60 &&  mark <= 69)
  {
    printf("D");
    scanf("%c", &grade);
  }

  else 
  {
    printf("E");
    scanf("%c", &grade);
  }

  return 0;
}