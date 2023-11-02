#include <stdio.h>

// 피보나치 수열을 재귀 함수로 계산하는 함수
int fibonacci(int n)
{
    if (n <= 0)
    {
        return 0; // n이 0 이하인 경우 0을 반환
    }
    else if (n == 1)
    {
        return 1; // n이 1인 경우 1을 반환
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // n 이외의 경우, 이전 두 항의 합을 반환
    }
}

int main()
{
    int n;

    printf("피보나치 수열을 몇 항까지 출력할까요? ");
    scanf_s("%d", &n);

    if (n < 1)
    {
        printf("유효한 입력이 아닙니다.\n");
        return 1; // 입력이 유효하지 않을 때 에러 코드 반환
    }

    printf("피보나치 수열: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", fibonacci(i)); // 0부터 n-1 항까지 피보나치 수열 출력
        if (i < n - 1)
        {
            printf(", "); // 항들을 쉼표와 공백으로 구분하여 출력
        }
    }
    printf("\n"); // 줄 바꿈으로 출력 종료

    return 0;
}
