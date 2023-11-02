#include <stdio.h>
// �־��� ������ �ڼ��� ġ�� �Լ�
void clapGame(int n);

int main()
{
    int number;

    // ����ڷκ��� � ������ �ڼ��� ���� �Է� ����
    printf("� ������ �ڼ��� ĥ���? ");
    scanf_s("%d", &number);

    // ��ȿ�� �˻�: �Է°��� 1 �̻��̾�� ��
    if (number < 1)
    {
        printf("��ȿ�� �Է��� �ƴմϴ�.\n");
        return 1;
    }

    // �־��� ������ �ڼ��� ���ִ� �Լ� ȣ��
    clapGame(number);

    return 0;
}

// �־��� ������ �ڼ��� ġ�� �Լ�
void clapGame(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int isClap = 0; // �ڼ��� �ƴ��� ���θ� ��Ÿ���� �÷���

        // ���� ���ڿ� 3, 6, 9 �� �ϳ��� ���ԵǸ� �ڼ� ����
        while (num > 0)
        {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9)
            {
                printf("�ڼ� ");
                isClap = 1;
                break;
            }
            num /= 10;
        }

        // �ڼ��� ������ ���� ���, ���� ���� ���
        if (!isClap)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
