#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet : ");
    scanf(" %c", &ch);

    while (1)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            printf("It is an alphabet\n");
        }
        else
        {
            printf("It is not an alphabet\n");
        }

        break;
    }

    return 0;
}