#include <stdio.h>

int main()
{
    int n;
    int i, j;
    printf("2 이상의 정수를 입력하세요: ");
    scanf_s("%d", &n);

    int count = 0;

    for (i = 2; i <= n; i++)
    {
        int h = 1;

        if (i <= 1)
        {
            h = 0;
        }
        else
        {
            for (j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    h = 0;
                    break;
                }
            }
        }

        if (h)
        {
            printf("%3d ", i);
            count++;

            if (count == 5)
            {
                printf("\n");
                count = 0;
            }
        }
    }

    return 0;
}