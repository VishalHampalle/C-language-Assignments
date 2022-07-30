#include <stdio.h>
void main()
{
    int l, b, Area, peri;
    printf("Enter the length : ");
    scanf("%d", &l);
    printf("Enter the breadth : ");
    scanf("%d", &b);
    Area = l * b;
    peri = 2 * (l + b);
    printf("Area is %d \n", Area);
    printf("Perimeter is %d", peri);
}