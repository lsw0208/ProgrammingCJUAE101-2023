#include <stdio.h>
#include <math.h>

int main()
{
    int n = 10; // �Է¹��� ������ ����
    double sum = 0.0; // ���ڵ��� ��
    double sum_of_squares = 0.0; // ���ڵ��� ������ ��
    double numbers[n]; // �Է¹��� ���ڵ��� ������ �迭

    // ���ڵ��� �Է� ����
    printf("%d���� ���ڸ� �Է��ϼ���:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("���� %d: ", i + 1);
        scanf_s("%lf", &numbers[i]);
        sum += numbers[i];
        sum_of_squares += numbers[i] * numbers[i];
    }

    // ���� ���
    printf("����: %.2lf\n", sum);

    // ��� ���
    double mean = sum / n;
    printf("���: %.2lf\n", mean);

    // �л� ���
    double variance = (sum_of_squares / n) - (mean * mean);
    printf("�л�: %.2lf\n", variance);

    // ǥ������ ���
    double standard_deviation = sqrt(variance);
    printf("ǥ������: %.2lf\n", standard_deviation);

    return 0;
}
