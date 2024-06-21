
#include<stdio.h>
int main()

{
    int age[6],k, check;
    int below=0,temp;

    for(k=0; k<6; k++)
    {
        printf("Enter the age of student %d\n: ",k+1);
        scanf("%d",&age[k]);
    }
     do
    {
        check=0;

       for(k=0; k<5 ; k++)
       {
        if(age[k] > age[k+1])
        {
            temp=age[k];
            age[k] = age [k+1];
            age[k+1] = temp;
            check = 1;
        }
       }
    } while (check==1);
    for(k=0; k<6; k++)
    {
        if(age [k] < 18)
        {
            below ++ ;
        }
        printf("%d\n", age[k]);
    }
                
   
        return 0;
}

