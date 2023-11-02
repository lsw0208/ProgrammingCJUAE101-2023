#include <stdio.h>
#include <math.h>

// �߷� ���ӵ� (���������� �߷� ���ӵ�: 9.8 m/s^2)
#define GRAVITY 9.8

int main()
{
    double height; // ���� ���� (����)
    double time;   // �������� �� �ɸ��� �ð� (��)

    // ����ڷκ��� ������ ���� �Է� ����
    printf("������ ���̸� ���� ������ �Է��ϼ���: ");
    scanf_s("%lf", &height);

    // ��ȿ�� �˻�: ���̴� 0���� ū ���̾�� ��
    if (height <= 0)
    {
        printf("��ȿ�� �Է��� �ƴմϴ�. ��� ���� �Է��ϼ���.\n");
        return 1;
    }

    // �������� �� �ʿ��� �ð� ��� (s = 0.5 * g * t^2, ���⼭ s�� ����, g�� �߷� ���ӵ�, t�� �ð�)
    // �ð� t�� ���ϴ� ����: t = sqrt((2 * s) / g)
    time = sqrt((2 * height) / GRAVITY);

    // ��� ���
    printf("�������� �� %.2lf �ʰ� �ɸ��ϴ�.\n", time);

    return 0;
}
