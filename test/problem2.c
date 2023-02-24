#include <stdio.h>

int main()
{
    int diceNumbers[3] = {0};

    scanf("%d %d %d", &diceNumbers[0], &diceNumbers[1], &diceNumbers[2]);

    if (diceNumbers[0] == diceNumbers[1] && diceNumbers[1] == diceNumbers[2] && diceNumbers[2] == diceNumbers[0])
        printf("%d", 10000 + (diceNumbers[0] * 1000));
    else if (diceNumbers[0] == diceNumbers[1])
        printf("%d", 1000 + (diceNumbers[0] * 100));
    else if (diceNumbers[1] == diceNumbers[2])
        printf("%d", 1000 + (diceNumbers[1] * 100));
    else if (diceNumbers[2] == diceNumbers[0])
        printf("%d", 1000 + (diceNumbers[2] * 100));
    else
    {
        int maxValue = 0;

        for (int i = 0; i < 3; i++)
        {
            if (maxValue < diceNumbers[i])
                maxValue = diceNumbers[i];
        }

        printf("%d", (maxValue * 100));
    }

    return 0;
}