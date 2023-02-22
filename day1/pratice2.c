#include <stdio.h>

int main()
{
    int inputBirth;
    char inputBloodType;
    float inputHeight;
    char temp;

    printf("언제 태어나셨나요? : ");
    scanf("%d", &inputBirth);

    scanf("%c", &temp);

    printf("혈액형이 뭐에요? : ");
    scanf("%c", &inputBloodType);

    printf("키는 어느정도 되시나요? : ");
    scanf("%f", &inputHeight);

    printf("\n");

    printf("당신은 %d 년에 태어났습니다! \n", inputBirth);
    printf("당신의 혈액형은 %c 형 입니다! \n", inputBloodType);
    printf("당신의 키는 %.1f 입니다! \n", inputHeight);

    return 0;
}