#include <stdio.h>

// �Ǻ���ġ ������ ��� �Լ��� ����ϴ� �Լ�
int fibonacci(int n)
{
    if (n <= 0)
    {
        return 0; // n�� 0 ������ ��� 0�� ��ȯ
    }
    else if (n == 1)
    {
        return 1; // n�� 1�� ��� 1�� ��ȯ
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // n �̿��� ���, ���� �� ���� ���� ��ȯ
    }
}

int main()
{
    int n;

    printf("�Ǻ���ġ ������ �� �ױ��� ����ұ��? ");
    scanf_s("%d", &n);

    if (n < 1)
    {
        printf("��ȿ�� �Է��� �ƴմϴ�.\n");
        return 1; // �Է��� ��ȿ���� ���� �� ���� �ڵ� ��ȯ
    }

    printf("�Ǻ���ġ ����: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", fibonacci(i)); // 0���� n-1 �ױ��� �Ǻ���ġ ���� ���
        if (i < n - 1)
        {
            printf(", "); // �׵��� ��ǥ�� �������� �����Ͽ� ���
        }
    }
    printf("\n"); // �� �ٲ����� ��� ����

    return 0;
}
