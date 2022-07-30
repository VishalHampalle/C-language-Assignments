// Sum of 1 to 10
#include <stdio.h>
void main()
{
    int n, x = 1, add = 0;
    printf("Enter n : ");
    scanf("%d", &n);

    while (x <= n)
    {
        add = add + x;
        x++;
    }
    printf("sum of 1 to 10 is %d", add);
}