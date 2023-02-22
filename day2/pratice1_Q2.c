#include <stdio.h>

int main()
{
    int ages[5] = {0};
    int adult = 0, minor = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("%d 번째 사람의 나이를 입력해주세요 : ", i + 1);
        scanf("%d", &ages[i]);

        if (20 <= ages[i])
        {
            adult++;
        }
        else
        {
            minor++;
        }
    }
    printf("성인은 %d 명, 미성년자는 %d 명 입니다!", adult, minor);

    return 0;
}