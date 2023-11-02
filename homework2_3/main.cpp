#include <stdio.h>
// 주어진 수까지 박수를 치는 함수
void clapGame(int n);

int main()
{
    int number;

    // 사용자로부터 어떤 수까지 박수를 샐지 입력 받음
    printf("어떤 수까지 박수를 칠까요? ");
    scanf_s("%d", &number);

    // 유효성 검사: 입력값이 1 이상이어야 함
    if (number < 1)
    {
        printf("유효한 입력이 아닙니다.\n");
        return 1;
    }

    // 주어진 수까지 박수를 쳐주는 함수 호출
    clapGame(number);

    return 0;
}

// 주어진 수까지 박수를 치는 함수
void clapGame(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int isClap = 0; // 박수를 쳤는지 여부를 나타내는 플래그

        // 현재 숫자에 3, 6, 9 중 하나가 포함되면 박수 쳐줌
        while (num > 0)
        {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9)
            {
                printf("박수 ");
                isClap = 1;
                break;
            }
            num /= 10;
        }

        // 박수를 쳐주지 않은 경우, 현재 숫자 출력
        if (!isClap)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
