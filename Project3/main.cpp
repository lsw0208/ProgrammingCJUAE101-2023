#include <stdio.h>

int main()
{
    int dan;

    printf(" 2���� 9������ ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &dan);

    for (int i = 2; i <= 9 && dan >= 2 && dan <= 9; i++)
    {
        printf("%d��:\n", i);

        for (int j = 1; j <= 9; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    if (dan < 2 || dan > 9)
    {
        printf("�߸��� �Է��Դϴ�. 2���� 9������ ���ڸ� �Է��ϼ���.\n");
    }

    return 0;
}