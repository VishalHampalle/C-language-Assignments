#include <stdio.h>
void main()
{
    int n,sum,rem;
    printf("Enter number :");
    scanf("%d",&n);
    for ( sum = 0; n > 0; n=n/10)
    {
        rem = n % 10;
        sum = sum + rem;
    }
    printf("Sum of digit is %d",sum);
}