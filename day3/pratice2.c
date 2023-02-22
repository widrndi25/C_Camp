#include <stdio.h>

int main()
{
    int inputNumber = 0;

    printf("한 개의 정수를 입력해 주세요! : ");
    scanf("%d", &inputNumber);

    for (int i = 0; i < inputNumber; i++)
    {
        printf("*");
    }
}