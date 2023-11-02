#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // 난수 발생을 위한 초기화

    const int codeLength = 3; // 숨겨진 숫자의 길이
    int secretCode[codeLength]; // 숨겨진 숫자를 저장할 배열

    // 서로 다른 난수로 이루어진 숨겨진 숫자 생성
    for (int i = 0; i < codeLength; i++)
    {
        int digit;
        do
        {
            digit = rand() % 10; // 0부터 9까지의 난수 생성
        } while (digit == 0 || secretCode[0] == digit || secretCode[1] == digit); // 서로 다른 숫자만 허용
        secretCode[i] = digit;
    }

    printf("숫자야구 게임을 시작합니다. %d자리 숫자를 맞춰보세요.\n", codeLength);

    int guess[codeLength]; // 사용자가 추측한 숫자를 저장할 배열

    // 게임 루프
    int attempts = 0; // 시도 횟수 초기화
    while (1)
    {
        printf("숫자를 입력하세요: ");

        // 사용자의 입력을 받음
        for (int i = 0; i < codeLength; i++)
        {
            scanf_s("%d", &guess[i]);
        }

        // 시도 횟수 증가
        attempts++;

        // 정답 확인
        int correctDigits = 0;
        int correctPositions = 0;

        for (int i = 0; i < codeLength; i++)
        {
            if (guess[i] == secretCode[i])
            {
                correctPositions++;
            }

            for (int j = 0; j < codeLength; j++)
            {
                if (i != j && guess[i] == secretCode[j])
                {
                    correctDigits++;
                }
            }
        }

        // 게임 종료 조건 확인
        if (correctPositions == codeLength)
        {
            printf("축하합니다! 정답을 맞추셨습니다.\n");
            printf("시도 횟수: %d회\n", attempts);
            break;
        }
        else
        {
            printf("정답 중 %d스트라이크 %d볼입니다.\n", correctPositions, correctDigits);
        }
    }

    return 0;
}
