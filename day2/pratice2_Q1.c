#include <stdio.h>

int main()
{
    int ages[5] = {0};
    int teenager = 0, twenties = 0, thirties = 0, another = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("%d 번째 사람의 나이를 입력해주세요 : ", i + 1);
        scanf("%d", &ages[i]);

        if (10 <= ages[i] && ages[i] < 20)
        {
            teenager++;
        }
        else if (20 <= ages[i] && ages[i] < 30)
        {
            twenties++;
        }
        else if (30 <= ages[i] && ages[i] < 40)
        {
            thirties++;
        }
        else
            another++;
    }
    printf("10대는 %d 명, 20대는 %d 명, 30대는 %d 명 \
    그 이상이 %d 명입니다!",
           teenager, twenties, thirties, another);

    return 0;
}