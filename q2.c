#include <stdio.h>

int main()
{
    char ch;

    printf(" lowercase letter: ");
    scanf(" %c", &ch);

    while (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;

        printf("Uppercase = %c\n", ch);

        break;
    }

    return 0;
}