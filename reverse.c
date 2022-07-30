// 1 to 10 reverse print
#include <stdio.h>
void main()
{
    int n;
    
    printf("Enter n : ");
    scanf("%d", &n);

    while (n >= 1)
    {
        printf("\n %d", n);
        n--;
    }
}