#include <stdio.h>
void main()
{
    int n, x = 1, fact = 1;
    printf("Enter n :");
    scanf("%d", &n);
    while (x <= n)
    {
        fact = fact * x;
        x++;
    }
    printf("Factorial of %d is : %d", n, fact);
}