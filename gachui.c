#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:\n ");
    scanf("%d", &age);

    if(age <1 || age >100)
    {
        printf("invalid age!\n");
    }else if(age >= 1 && age <18){
        printf("child");
    }else{
        printf("adult");
    }

    return 0;

}
 