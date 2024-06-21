//a program that identifies if input is a character, alphabet, digit or special character

#include <stdio.h>

int main()

{
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);

    if(ch >='a' && ch<='z' || ch >='A' && ch<='Z')
    {
        printf("alphabet ");
    }

    else if(ch>=-90000 && ch<=90000 )
    {
        printf("number ");
    }

    else 
    {
        printf("special character");
    }
    return 0;
}