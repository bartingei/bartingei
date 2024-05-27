#include<stdio.h>

int main() 
{
    FILE *f;
    char *months[] = {"January", "February", "March", "April","May", "June", "July", "August", "September", "October", "November", "December"};
     f = fopen("Data.txt", "w");
    for (int i = 0; i < 12; i++) {
        fprintf(f, "%s\n", months[i]);
    }
    fclose(f);
    return 0;
}