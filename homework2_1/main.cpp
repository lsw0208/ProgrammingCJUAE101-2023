#include <stdio.h>

// �ִ�����(GCD) ��� �Լ�
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b; // a�� b�� ���� �������� ���ο� b�� ����
        a = temp;  // ������ b���� a�� ����
    }
    return a; // �ݺ����� ����Ǹ� a�� �ִ������� ����Ǿ� ��ȯ
}

// �ּҰ����(LCM) ��� �Լ�
int findLCM(int a, int b)
{
    int gcd = findGCD(a, b); // ���� �ִ������� ���
    int lcm = (a * b) / gcd; // �ּҰ������ �� ���� ���� �ִ������� ���� ��
    return lcm; // �ּҰ���� ��ȯ
}

int main()
{
    int num1, num2;

    printf("�� ���� ������ �Է��ϼ���: ");
    scanf_s("%d %d", &num1, &num2);

    int gcd = findGCD(num1, num2); // �ִ����� ���
    int lcm = findLCM(num1, num2); // �ּҰ���� ���

    printf("�Է��� �� ������ �ִ�����(GCD)�� %d�Դϴ�.\n", gcd);
    printf("�Է��� �� ������ �ּҰ����(LCM)�� %d�Դϴ�.\n", lcm);

    return 0;
}