
#include <stdio.h>
void main()
{
    float Basic, HRA, DA, TA, Gross_Salary;

    printf("Are you student : ");

    printf("\n 1 :: yes");
    printf("\n 2 :: No\n");

    printf("Enter yes or No :");
    scanf("%f", &student);

    if (student == 1)
    {

        printf("\n Enter cost :  ");
        scanf("%lf", &cost);
        printf("\n Enter sold :  ");
        scanf("%lf", &sold);

        discount = cost - sold;
        discount_per = (discount * 100 / cost);
        printf("discount percentage is : %lf ", discount_per);
    }
    else if (student == 2)
    {
        float Basic, HRA, DA, TA, Gross_Salary;

        printf("\n Please Enter the Basic Salary of an Employee  :  ");
        scanf("%f", &Basic);

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