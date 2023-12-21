#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double* numbers;
    double sum = 0.0;

    // ����ڷκ��� �Է¹��� �Ǽ��� ���� ��û
    printf("�Է��� �Ǽ��� ������ �Է��ϼ���: ");
    scanf_s("%d", &n);

    // ���� �޸� �Ҵ��� ����Ͽ� �Ǽ��� ������ �迭 ����
    numbers = (double*)malloc(n * sizeof(double));

    // �޸� �Ҵ� Ȯ��
    if (numbers == NULL)
    {
        printf("�޸� �Ҵ翡 �����߽��ϴ�.\n");
        exit(1);
    }

    // ����ڷκ��� �Ǽ� �Է� �ޱ�
    for (int i = 0; i < n; i++)
    {
        printf("�Ǽ� %d �Է�: ", i + 1);
        scanf_s("%lf", &numbers[i]);
    }

    // �Է¹��� �Ǽ����� �� ���
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    // ��� ���
    printf("�Էµ� �Ǽ��� ��: %lf\n", sum);

    // ���� �Ҵ�� �޸� ����
    free(numbers);

    return 0;
}