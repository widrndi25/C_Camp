#include <stdio.h>

int main()
{
    int numbers[8][9];

    for (int i = 2; i < 10; i++)
        for (int j = 1; j < 9; j++)
            numbers[i][j] = i * j;

    for (int i = 2; i < 10; i++)
    {
        for (int j = 1; j < 9; j++)
            printf("%d * %d = %d \n", i, j, (i * j));
        printf("\n");
    }
}