#include <stdio.h>

int main()
{
    int i = 1;
    while (i < 10)
    {
        printf("2 * %d = %d \n", i, (2 * i));
        i++;
    }

    printf("-------------------- \n");

    for (int i = 1; i < 10; i++)
        printf("2 * %d = %d \n", i, (2 * i));

    return 0;
}