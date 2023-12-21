#include <stdio.h>
#include <string.h>

struct Player
{
    char name[50];
    double era;
    int wins;
};

// ���� ������ ����ϴ� �Լ�
void print_list(struct Player list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("�̸�: %s, ��� ��å��: %.2lf, �¸� ����: %d\n", list[i].name, list[i].era, list[i].wins);
    }
}

// �����å��(`era`)�� �������� �������� �����ϴ� �Լ�
void sort_by_era(struct Player list[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (list[i].era < list[j].era)
            {
                // �� ������ ������ ����
                struct Player temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

int main()
{
    struct Player list[5] =
    {
        {"���", 2.00, 20},
        {"�ȿ���", 2.39, 9},
        {"��ĳ��", 2.54, 12},
        {"�Ķ�", 2.65, 11},
        {"��ĭŸ��", 2.67, 13}
    };

    int size = sizeof(list) / sizeof(list[0]); // �迭 ũ�� ���

    // �迭�� ������ �迭 ����
    struct Player a[5];
    struct Player* p[5];

    // �迭 a�� �ʱ�ȭ
    for (int i = 0; i < size; i++)
    {
        a[i] = list[i];
    }

    // ������ �迭 p�� �ʱ�ȭ
    for (int i = 0; i < size; i++)
    {
        p[i] = &list[i];
    }

    // �����å���� �������� �������� ����
    sort_by_era(a, size);

    // ���ĵ� ���� ���� ���
    print_list(a, size);

    return 0;
}