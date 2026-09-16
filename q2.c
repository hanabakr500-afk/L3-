#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i * i == n)
        {
            printf("Perfect square");
            return 0;
        }
    }

    printf("Not a perfect square");

    return 0;
    
}