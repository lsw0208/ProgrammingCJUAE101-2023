#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double* numbers;
    double sum = 0.0;

    // 사용자로부터 입력받을 실수의 개수 요청
    printf("입력할 실수의 개수를 입력하세요: ");
    scanf_s("%d", &n);

    // 동적 메모리 할당을 사용하여 실수를 저장할 배열 생성
    numbers = (double*)malloc(n * sizeof(double));

    // 메모리 할당 확인
    if (numbers == NULL)
    {
        printf("메모리 할당에 실패했습니다.\n");
        exit(1);
    }

    // 사용자로부터 실수 입력 받기
    for (int i = 0; i < n; i++)
    {
        printf("실수 %d 입력: ", i + 1);
        scanf_s("%lf", &numbers[i]);
    }

    // 입력받은 실수들의 합 계산
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    // 결과 출력
    printf("입력된 실수의 합: %lf\n", sum);

    // 동적 할당된 메모리 해제
    free(numbers);

    return 0;
}