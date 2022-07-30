#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("Enter num :");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
        }
    printf("sum of digit is : %d", sum);
}
