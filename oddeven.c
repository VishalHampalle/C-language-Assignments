#include <stdio.h>
void main()
{
    int a, r;
    printf("Enter the number : ");
    scanf("%d", &a);
    r = a%2;
    if (r == 0)
    {
        printf("even");
    }
    else
    {
        printf("Odd");
    }
}