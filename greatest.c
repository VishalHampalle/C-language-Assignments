#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    printf("Enter c :");
    scanf("%d", &c);

    if (a > b && b > c)
    {
        printf("greatest number is  : %d",a);
    }
    else if (b > a && a > c)
    {
        printf("greatest number is  : %d",b);
    }
    else if (c > a && c > b)
    {
        printf("greatest number is  : %d",c);
    }
}