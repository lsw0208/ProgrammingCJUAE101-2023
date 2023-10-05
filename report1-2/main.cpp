#include <stdio.h>

int main(void)
{
    int Month = 0;

    // 사용자로부터 월을 입력 받음
    printf("월 입력: ");
    scanf_s("%d", &Month, sizeof(Month));

    // 월이 1에서 12 사이인지 확인
    if (Month >= 1 && Month <= 12)
    {
        if (Month >= 3 && Month <= 5)
        {
            printf("봄\n");
        }
        else if (Month >= 6 && Month <= 8)
        {
            printf("여름\n");
        }
        else if (Month >= 9 && Month <= 11)
        {
            printf("가을\n");
        }
        else if (Month == 12 || Month == 1 || Month == 2)
        {
            printf("겨울\n");
        }
    }
    else
    {
        // 1에서 12 이외의 숫자 처리
        printf("틀린 값입니다.\n");
    }

    return 0;
}