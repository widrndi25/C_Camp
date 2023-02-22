#include <stdio.h>

int main()
{
    int score = 0;

    printf("성적을 입력해 주세요! : ");
    scanf("%d", &score);

    switch (score / 10)
    {
    case 9:
        printf("A 입니다!");
        break;
    case 8:
        printf("B 입니다!");
        break;
    case 7:
        printf("C 입니다!");
        break;
    case 6:
        printf("D 입니다!");
        break;
    default:
        printf("F 입니다!");
        break;
    }

    return 0;
}