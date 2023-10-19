#include <stdio.h>

int main()
{
    int dan;

    printf(" 2부터 9까지의 숫자를 입력하세요 : ");
    scanf("%d", &dan);

    for (int i = 2; i <= 9 && dan >= 2 && dan <= 9; i++)
    {
        printf("%d단:\n", i);

        for (int j = 1; j <= 9; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    if (dan < 2 || dan > 9)
    {
        printf("잘못된 입력입니다. 2부터 9까지의 숫자를 입력하세요.\n");
    }

    return 0;
}