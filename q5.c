#include <stdio.h>

int main()
{
    float a, b, sum;
    int result;

    printf("Enter two floating numbers: ");
    scanf("%f %f", &a, &b);

    sum = a + b;
    result = sum;

    printf("The floor of the sum = %d", result);

    return 0;
}