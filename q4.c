#include <stdio.h>

int main()
{
    int temp;
    int time;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    while (temp >= 0 && temp <= 100)
    {
        if (temp < 30)
        {
            time = 7;
        }
        else if (temp < 60)
        {
            time = 5;
        }
        else if (temp < 90)
        {
            time = 3;
        }
        else
        {
            time = 1;
        }

        printf("Heating time = %d minutes\n", time);

        break;
    }

    if (temp < 0 || temp > 100)
    {
        printf("Invalid input\n");
    }

    return 0;
}