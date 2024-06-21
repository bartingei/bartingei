/*write a program that prompts the user to input a number 
this allows the program to display the day of the week in concidence with the number*/

#include <stdio.h>
int main()
{
    int day;
    printf("Enter any number of the day of the week between 1 and 7\n");
    scanf("%d" ,&day);

    switch (day)
    {

    case 1:
        printf("sunday\n ");
        break;

    case 2:
        printf("monday\n ");
        break;

    case 3:
        printf("tuesday\n ");
        break;

    case 4:
        printf("wednesday\n ");
        break;

    case 5:
        printf("thursday\n ");
        break;

    case 6:
        printf("friday\n ");
        break;


    case 7:
        printf("saturday\n ");
        break;
    
    default:
    printf("invalid number input! ");
        break;
    }
}