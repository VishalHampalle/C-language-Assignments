#include <stdio.h>
void main()
{
    int n, r = 0;
    printf("Enter Number :");
    scanf("%d", &n);
    while (n != 0)
    {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }
    printf("sum of digits is %d", r);
}