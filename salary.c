//salaries of employees in a company.
#include<stdio.h>
int main()
{
    int bsalary;
    float hallow,medallow,gsalary,NHIF,PAYE,netpay;
    printf("enter your basic salary:\n ");
    scanf("%d",&bsalary);

    if(bsalary<15000)
    {
        medallow=bsalary*0.2;
        hallow=bsalary*0.5;
        PAYE=bsalary*0.3;
        NHIF=bsalary*0.0375;
    }
    else if(bsalary>=15000 || bsalary<50000)
    {
        medallow=bsalary*0.35;
        hallow=bsalary*0.55;
    }
    else if (bsalary>=50000 || bsalary<100000)
    {
        medallow=bsalary*0.5;
        hallow=bsalary*0.65;
    }
    else if (bsalary>=100000 || bsalary<500000)
    {
        medallow=bsalary*0.8;
        hallow=bsalary*0.75;
    }
    else
    {
        medallow=bsalary*0.95;
        hallow=bsalary*1;
    }

    gsalary=bsalary+hallow+medallow;
    PAYE=bsalary*0.3;
    NHIF=gsalary*0.0375;
    netpay=gsalary-(NHIF+PAYE);

    printf("bsalary=%d\ngsalary=%.2f\nPAYE=%.2f\nNHIF=%.2f\nnetpay=%.2f\n",bsalary,gsalary,PAYE,NHIF,netpay);
    return 0;
}
