#include <stdio.h>
#include <math.h>

int main()
{
    int n = 10; // 입력받을 숫자의 개수
    double sum = 0.0; // 숫자들의 합
    double sum_of_squares = 0.0; // 숫자들의 제곱의 합
    double numbers[n]; // 입력받을 숫자들을 저장할 배열

    // 숫자들을 입력 받음
    printf("%d개의 숫자를 입력하세요:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("숫자 %d: ", i + 1);
        scanf_s("%lf", &numbers[i]);
        sum += numbers[i];
        sum_of_squares += numbers[i] * numbers[i];
    }

    // 총합 계산
    printf("총합: %.2lf\n", sum);

    // 평균 계산
    double mean = sum / n;
    printf("평균: %.2lf\n", mean);

    // 분산 계산
    double variance = (sum_of_squares / n) - (mean * mean);
    printf("분산: %.2lf\n", variance);

    // 표준편차 계산
    double standard_deviation = sqrt(variance);
    printf("표준편차: %.2lf\n", standard_deviation);

    return 0;
}
