//constant discount
#include<stdio.h>
int main ()
{
	int amount, years;
	float I, pamount;
    const float interest=0.12;
	printf("what is the amount: ");
	scanf("%d",& amount);
	printf("how many years: ");
	scanf("%d",&years);
	I=amount*interest;
	pamount=amount+(I*2);
	printf("I=%.2f\n,pamount=%.2f\n",I,pamount);
	return 0;
}




, subject1 , subject2 ,subject3 ,subject4 ,subject5 ,subject6 ,subject7 ,subject8 , subject9


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
        average = total / subject[9];

        printf("total=%d\naverage=%d\n", total, average);



    for(i=0 ; i<9 ; i++){
        for (x = i + 1 ; x < 9 ; x++){
            if(marks[i] < marks[x]){
                check = marks[i];
                marks[i] = marks[x];
                marks[x] = check;

            }
        }
     }

       //printing sorted marks
       for(i = 0; i < 9; i++) {
        printf("%.2f\t", marks[i]);
       }
            