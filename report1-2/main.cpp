#include <stdio.h>

int main(void)
{
    int Month = 0;

    // ����ڷκ��� ���� �Է� ����
    printf("�� �Է�: ");
    scanf_s("%d", &Month, sizeof(Month));

    // ���� 1���� 12 �������� Ȯ��
    if (Month >= 1 && Month <= 12)
    {
        if (Month >= 3 && Month <= 5)
        {
            printf("��\n");
        }
        else if (Month >= 6 && Month <= 8)
        {
            printf("����\n");
        }
        else if (Month >= 9 && Month <= 11)
        {
            printf("����\n");
        }
        else if (Month == 12 || Month == 1 || Month == 2)
        {
            printf("�ܿ�\n");
        }
    }
    else
    {
        // 1���� 12 �̿��� ���� ó��
        printf("Ʋ�� ���Դϴ�.\n");
    }

    return 0;
}