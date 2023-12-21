#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ���� ǥ���ϴ� ����ü
struct Point
{
    double x;
    double y;
};

// ������ ǥ���ϴ� ����ü
struct Line
{
    double a; // ������ ������ 3x - 4y + 3 = 0 ������ a
    double b; // ������ ������ 3x - 4y + 3 = 0 ������ b
    double c; // ������ ������ 3x - 4y + 3 = 0 ������ c
};

// �� �� ������ �Ÿ� ��� �Լ�
double calculateDistance(struct Point p1, struct Point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

// ���� ���� ������ �ִܰŸ� ��� �Լ�
double calculateShortestDistance(struct Point point, struct Line line)
{
    double numerator = fabs(line.a * point.x + line.b * point.y + line.c);
    double denominator = sqrt(pow(line.a, 2) + pow(line.b, 2));
    return numerator / denominator;
}

int main()
{
    // �־��� ������ ���� ����
    struct Line line = { 3, -4, 3 }; // 3x - 4y + 3 = 0
    struct Point point = { -5, 3 };

    // �ִܰŸ� ���
    double shortestDistance = calculateShortestDistance(point, line);

    printf("�� (-5, 3)�� ���� 3x - 4y + 3 = 0 ������ �ִܰŸ���: %lf\n", shortestDistance);

    return 0;
}