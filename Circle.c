#include <stdio.h>
void main()
{
    float r, Area, peri, pi = 3.14;
    printf("Enter radius : ");
    scanf("%f", &r);
    Area = pi * r * r;
    peri = 2 * pi * r;
    printf("Area is %f \n", Area);
    printf("Perimeter is %f", peri);
}