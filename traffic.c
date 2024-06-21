//a traffic light program using switch case statements
#include<stdio.h>
int main()
{
    char colour;
    printf("enter a colour: \n");
    scanf("%c", &colour);

    switch (colour)
    {
    case 'r':
    case 'R':

    {
        printf("STOP!\n");
    }
        break;

    case 'y':
    case 'Y':
    case 'o':
    case 'O':

    {
        printf("GET READY!\n");
    }
        break;

    case 'g':
    case 'G':

    {
        printf("GO!\n");
    }
        break;
    
    default:
    {
        printf("INVALID COLOUR INPUT\n");
    }
        break;
    }
}