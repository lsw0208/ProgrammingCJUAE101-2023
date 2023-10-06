#include <stdio.h>

int main()
{
    int birthYear, birthMonth, birthDay;

    printf("출생연도를 입력하세요: ");
    scanf("%d", &birthYear);

    printf("출생월을 입력하세요: ");
    scanf("%d", &birthMonth);

    printf("출생일을 입력하세요: ");
    scanf("%d", &birthDay);

    // "(출생년도)-(월)+(일)" 계산
    int result = birthYear - birthMonth + birthDay;

    // 마지막 자리의 숫자가 0인지 확인
    int lastDigit = result % 10;

    if (lastDigit == 0)
    {
        printf("Very Good\n");
    }
    else
    {
        printf("SoSo\n");
    }

    return 0;
}