#include <stdio.h>

int main()
{
    int ages[5] = {0};
    int twenty = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("%d 번째 사람의 나이를 입력해주세요 : ", i + 1);
        scanf("%d", &ages[i]);

        if (20 <= ages[i] && ages[i] < 30)
        {
            twenty++;
        }
    }
    printf("20대인 사람은 총 %d 명 입니다!", twenty);

    return 0;
}