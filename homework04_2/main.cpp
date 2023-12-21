#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 점을 표현하는 구조체
struct Point
{
    double x;
    double y;
};

// 직선을 표현하는 구조체
struct Line
{
    double a; // 직선의 방정식 3x - 4y + 3 = 0 에서의 a
    double b; // 직선의 방정식 3x - 4y + 3 = 0 에서의 b
    double c; // 직선의 방정식 3x - 4y + 3 = 0 에서의 c
};

// 두 점 사이의 거리 계산 함수
double calculateDistance(struct Point p1, struct Point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

// 점과 직선 사이의 최단거리 계산 함수
double calculateShortestDistance(struct Point point, struct Line line)
{
    double numerator = fabs(line.a * point.x + line.b * point.y + line.c);
    double denominator = sqrt(pow(line.a, 2) + pow(line.b, 2));
    return numerator / denominator;
}

int main()
{
    // 주어진 직선과 점의 정보
    struct Line line = { 3, -4, 3 }; // 3x - 4y + 3 = 0
    struct Point point = { -5, 3 };

    // 최단거리 계산
    double shortestDistance = calculateShortestDistance(point, line);

    printf("점 (-5, 3)과 직선 3x - 4y + 3 = 0 사이의 최단거리는: %lf\n", shortestDistance);

    return 0;
}