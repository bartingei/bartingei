

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int userguess, randomnumber;

    srand(time(NULL)); //seed the random number generator
    randomnumber = rand()  % 20 + 1; //this generates a random number between 1 and 20

    printf("guess a number between 1 and 20\n");
    scanf("%d", &userguess);

    printf("the randomly generated number is %d\n", randomnumber);

    if(userguess == randomnumber)
    {
        printf("congratulations! You won!");
    }

    else if(userguess != randomnumber)
    {
        printf("You lost!");
    }

    return 0;
}
