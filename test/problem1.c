#include <stdio.h>

int main()
{
    int A = 0, B = 0, C = 0;

    scanf("%d %d %d", &A, &B, &C);

    printf("%d \n", (A + B) % C);
    printf("%d \n", ((A % C) + (B % C)));

    printf("%d \n", (A * B) % C);
    printf("%d \n", ((A % C) * (B % C)));

    return 0;
}