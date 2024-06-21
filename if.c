#include<stdio.h>
int main()
{
    int daynumber;
    printf("enter number between 1 and 7\n");
    scanf("%d", &daynumber);

    if(daynumber ==1)
    {
        printf("monday\n");
    }
    else if (daynumber ==2)
    {
        printf("tuesday\n");
    }
    else if(daynumber ==3)
    {
        printf("wedneday\n");
    }
    else if(daynumber ==4)
    {
        printf("thursday\n");
    }
    else if(daynumber ==5)
    {
        printf("friday\n");
    }
    else if(daynumber ==6)
    {
        printf("saturday\n");
    }
    else if(daynumber ==7)
    {
        printf("sunday\n");
    }
    else
    {
        printf("invald number. please input number between 1 and 7\n");
    }

}