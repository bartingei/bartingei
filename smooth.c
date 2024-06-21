// CIT-227-081/2023
//JOHNPAUL KIBET

//a programthat uses arrays to accept marks from 9 subjects.

#include<stdio.h>
int main()
{
    int i, total, marks , subject1 , subject2 ,subject3 ,subject4 ,subject5 ,subject6 ,subject7 ,subject8 , subject9;
    char grade;
    float average;

    int subject[9];


     printf("enter subject 1 marks scored\n ");
    scanf("%d", &subject1);
    
    printf("enter subject 2 marks scored\n ");
    scanf("%d", &subject2);

    printf("enter subject 3 marks scored\n ");
    scanf("%d", &subject3);

    printf("enter subject 4 marks scored\n ");
    scanf("%d", &subject4);

    printf("enter subject 5 marks scored\n ");
    scanf("%d", &subject5);

    printf("enter subject 6 marks scored\n ");
    scanf("%d", &subject6);

    printf("enter subject 7 marks scored\n ");
    scanf("%d", &subject7);

    printf("enter subject 8 marks scored\n ");
    scanf("%d", &subject8);

    printf("enter subject 9 marks scored\n ");
    scanf("%d", &subject9);

        total = subject1 + subject2 + subject3 + subject4 + subject5 + subject6 + subject7 + subject8 + subject9;
        average = total / 9;

        printf("total=%d\n, average=%d\n", total, average);


    for(i=0; i<=100; i++)
    {
        if (marks <0 || marks > 100)
        {
            printf("invalid marks input: \n ");
        }
        else if (marks >= 70)
        {
            printf("A\n");
        }
            else if (marks >= 70)
        {
            printf("A\n");
        }
        
            else if (marks >= 60 && marks < 70)
        {
            printf("B\n");
        }
            else if (marks >= 50 && marks < 60)
        {
            printf("C\n");
        }
            else if (marks >= 40 && marks < 50)
        {
            printf("D\n");
        }
            else 
        {
            printf("E\n");
        }

         return 0;
    }

}
