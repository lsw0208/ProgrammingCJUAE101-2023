#include <stdio.h>

int main()
{
    int number;

    printf("5자리 숫자를 입력하세요: ");
    scanf("%d", &number);

    // 각 자릿수의 합을 계산
    int sum = 0;
    int originalNumber = number; // 원래 숫자를 보존해야 함

    while (number > 0)
    {
        sum += number % 10; // 마지막 자릿수를 더함
        number /= 10; // 마지막 자릿수 제거
    }

    // 합을 5로 나눈 나머지 확인
    int remainder = sum % 5;

    if (remainder == 3)
    {
        printf("Suspect(용의자)\n");
    }
    else
    {
        printf("Citizen(시민)\n");
    }

    return 0;
}