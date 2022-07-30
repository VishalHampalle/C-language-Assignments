#include <stdio.h>
void main()
{
    double cost, sold, discount, discount_per;
    printf("\n Enter cost :  ");
    scanf("%lf", &cost);
    printf("\n Enter sold :  ");
    scanf("%lf", &sold);

    discount = cost - sold;
    discount_per = (discount * 100 / cost);
    printf("discount percentage is : %lf ", discount_per);
}