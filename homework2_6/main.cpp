#include <stdio.h>

// ������ ����ϴ� �Լ�
void printDiamond(int size)
{
    if (size % 2 == 0)
    {
        printf("������� Ȧ�� ũ��� �Է��ؾ� �մϴ�.\n");
        return;
    }

    int space = size / 2;
    int stars = 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }

        printf("\n");

        if (i < size / 2) {
            space--;
            stars += 2;
        }
        else {
            space++;
            stars -= 2;
        }
    }
}

// ���ﰢ���� ����ϴ� �Լ�
void printTriangle(int size)
{
    if (size < 2)
    {
        printf("���ﰢ���� ũ�Ⱑ 2 �̻��̾�� �մϴ�.\n");
        return;
    }

    for (int i = 1; i <= size; i++)
    {
        // ���� ���
        for (int j = 0; j < size - i; j++)
        {
            printf(" ");
        }

        // ��ǥ ���
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int choice, size;

    printf("������ �����ϼ��� (1: ������, 2: ���ﰢ��): ");
    scanf_s("%d", &choice);

    printf("ũ�⸦ �Է��ϼ���: ");
    scanf_s("%d", &size);

    if (choice == 1)
    {
        printDiamond(size);
    }
    else if (choice == 2)
    {
        printTriangle(size);
    }
    else {
        printf("�߸��� �����Դϴ�.\n");
    }

    return 0;
}
