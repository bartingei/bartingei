/*bartingei.c*/
#include<stdio.h>
int main()
{
    char color[20];
    char pluralnoun[20];
    char celebrity[20];

    printf("enter any color\n");
    scanf("%s", &color);
    printf("Enter a pluralnoun\n");
    scanf("%s", &pluralnoun);
    printf("Enter a celebrity\n");
    scanf("%s", &celebrity);

    
    printf("roses are  %s\n",color);
    printf("%s are blue\n",pluralnoun);
    printf("you know that i love %s\n",celebrity);
    
    return 0;   
}
