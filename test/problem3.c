#include <stdio.h>

int main()
{
    int number = 0;

    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        for (int j = number; j > i; j--)
            printf("*");
        printf("\n");
    }

    return 0;
}