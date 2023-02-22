#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;

    printf("첫 번째 숫자를 입력해 주세요! : ");
    scanf("%d", &firstNumber);

    printf("두 번째 숫자를 입력해 주세요! : ");
    scanf("%d", &secondNumber);

    printf("두 숫자의 계산 결과입니다! \n");
    printf("합 : %d \n", firstNumber + secondNumber);
    printf("차 : %d \n", firstNumber - secondNumber);
    printf("곱 : %d \n", firstNumber * secondNumber);
    printf("몫과 나머지 : %d, %d \n", firstNumber / secondNumber, firstNumber % secondNumber);
    printf("몫 : %f \n", (float)firstNumber / secondNumber);

    return 0;
}