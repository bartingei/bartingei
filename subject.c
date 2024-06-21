// CIT-227-081/2023
//JOHNPAUL KIBET

//Assignment 2

//a programthat uses arrays to accept marks from 9 subjects.

#include<stdio.h>
int main()
{
    int i , failedSubjects = 0, x;
    char grade;
    float average, total=0 ,check;

    float marks[9];

    for (i=0 ; i<9 ; i++)
    {
    	//this is to allow input
    	
        printf("enter marks %d\n", i+1);
        scanf("%f", &marks[i]);
        
        if (marks[i] >= 0 && marks[i] < 40)
        {
            marks[i] = marks[i] * 1.1;
            failedSubjects++;
        }

        else if(marks[i] >= 40 && marks[i] <= 100)
        {
            marks[i] = marks[i] * 0.95;
        }

        total += marks[i];
    }
        average = total / 9;     
        printf("total = %.2f\naverage = %.2f\nfailed subjects = %d\n", total, average, failedSubjects);

//this is for grading marks.

       if (average <0 || average > 100)
        {
            printf("invalid marks input: \n ");
        }
        else if (average >= 70)
        {
            printf("A\n");
        }
            else if (average >= 70)
        {
            printf("A\n");
        }
        
            else if (average >= 60 && average < 70)
        {
            printf("B\n");
        }
            else if (average >= 50 && average < 60)
        {
            printf("C\n");
        }
            else if (average >= 40 && average < 50)
        {
            printf("D\n");
        }
            else 
        {
            printf("F\n");
        }

        if (failedSubjects == 0)
        {
            printf("proceed to the next level\n");
        }

        else if(failedSubjects == 1 ||  failedSubjects == 2)
        {
            printf("Repeat / carry foward\n");
        }

                else if(failedSubjects == 3 ||  failedSubjects == 4)
        {
            printf("Take supplementary exam in the failed units\n");
        }

                else if(failedSubjects == 5 ||  failedSubjects == 6)
        {
            printf("Repeat failed units\n ");
        }

                else if(failedSubjects >= 7 )
        {
            printf("Discontimue from the course\n");
        }
       
       //for sorting... 
//x = i+1
       for( int i = 0; i < 9; i++) {
        for (int x = i + 1; x < 9; x++) {
            if (marks[i] < marks[x]) {
                check = marks[i];
                marks[i] = marks[x];
                marks[x] = check;    
            }
        }
    }
    //printing out the sorted marks
    for(int i = 0; i < 9; i+= 1){
    printf("%.2f\t ", marks[i]);
    }
    
         return 0;
    

}
