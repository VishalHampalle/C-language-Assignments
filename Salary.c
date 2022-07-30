/* C Program to Calculate Gross Salary of an Employee */

#include <stdio.h>

int main()
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

    return 0;
}