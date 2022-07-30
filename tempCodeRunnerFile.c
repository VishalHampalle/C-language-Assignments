#include <stdio.h>
void main()
{
    double Basic, HRA, DA, TA, Gross_Salary, cost, sold, discount, discount_per, choice, num, a, r;

    printf("\n 1 :: Discount");
    printf("\n 2 :: Basic salary");

    printf("\n Enter choice : ");
    scanf("%lf", &choice);

    if (choice == 1)
    {
        printf("\n Enter cost :  ");
        scanf("%lf", &cost);
        printf("\n Enter sold :  ");
        scanf("%lf", &sold);

        discount = cost - sold;
        discount_per = (discount * 100 / cost);
        printf("discount percentage is : %.2f ", discount_per);
    }
    else if (choice == 2)
    {
        printf("\n Please Enter the Basic Salary of an Employee  :  ");
        scanf("%lf", &Basic);

        if (Basic <= 5000)
        {
            HRA = (Basic * 10) / 100;
            DA = (Basic * 20) / 100;
            TA = (Basic * 25) / 100;
        }
        else
        {
            HRA = (Basic * 15) / 100;
            DA = (Basic * 25) / 100;
            TA = (Basic * 30) / 100;
        }
        Gross_Salary = Basic + HRA + DA + TA;
        printf("\n Gross Salary of this Employee  =  %.2f", Gross_Salary);
    }
}