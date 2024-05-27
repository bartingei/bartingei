#include<stdio.h>
int main()

//this is one for even numbers
{
    int j,k,oddsum,evensum;
    for(j = 0; j < 100; j++)
    {
        if( j % 2 == 0)
        {
            

            printf("\t%d \n",j++);
        }        
    }
    
//this is one for odd numbers
    for ( k = 0; k < 100; k++)
    {
        if (k % 2 != 0)
        {
            
           printf("\t%d", k++);
        }
        
    }
    
    evensum = j +j;
    oddsum = k +k;
    
    printf("\n%d + %d = %d",j , j , evensum);
    printf("\n%d", oddsum);
    
    return 0;
}



// this is a whole new program

//to print even numbers
#include<stdio.h>
int main()
{
    int n,i=0;

    printf("enter a number");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        while (i % 2 == 0)
        {
            printf("\n%d", i);
            i++;
        }
        
    }
     return 0;

    
}

