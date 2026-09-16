#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0)
    {
        printf("Cannot divide by zero\n");
    }
    else
    {
        while (a > 0)
        {
            a-= b;
        }

        if (a == 0)
        {
            printf("The first number is a multiple of the second\n");
        }
        else
        {
            printf("The first number is not a multiple of the second\n");
        }
    }

    return 0;
}