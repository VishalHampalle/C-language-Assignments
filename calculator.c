#include <stdio.h>
void main()
{
    int p, q, choice;
    printf("Enter p :");
    scanf("%d", &p);
    printf("Enter q :");
    scanf("%d", &q);

    printf("\n 1 :: Addition");
    printf("\n 2 :: Subtraction");
    printf("\n 3 :: Multiplication");
    printf("\n 4 :: Division");
    printf("\n 5 :: Modulous");

    printf("\n Enter choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Addition is %d + %d = %d", p, q, p + q);
    }
    else if (choice == 2)
    {
        printf("Addition is %d - %d = %d", p, q, p - q);
    }
    else if (choice == 3)
    {
        printf("Addition is %d * %d = %d", p, q, p * q);
    }
    else if (choice == 4)
    {
        printf("Addition is %d / %d = %d", p, q, p / q);
    }
    else if (choice == 5)
    {
        printf("Addition is %d %% %d = %d", p, q, p % q);
    }
    else
    {
        printf("kindly input correct choice \n");
    }
}