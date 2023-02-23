#include <stdio.h>

int main()
{
    int fibonacciNumbers[20] = {
        1,
        1,
    };
    for (int i = 0; i < 20; i++)
    {
        if (i == 0 || i == 1)
            continue;
        fibonacciNumbers[i] = fibonacciNumbers[i - 1] + fibonacciNumbers[i - 2];
    }

    for (int i = 0; i < 20; i++)
        printf("%d \n", fibonacciNumbers[i]);

    return 0;
}