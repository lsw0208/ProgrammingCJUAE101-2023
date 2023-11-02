#include <stdio.h>
#include <math.h>

// 중력 가속도 (지구에서의 중력 가속도: 9.8 m/s^2)
#define GRAVITY 9.8

int main()
{
    double height; // 절벽 높이 (미터)
    double time;   // 떨어지는 데 걸리는 시간 (초)

    // 사용자로부터 절벽의 높이 입력 받음
    printf("절벽의 높이를 미터 단위로 입력하세요: ");
    scanf_s("%lf", &height);

    // 유효성 검사: 높이는 0보다 큰 값이어야 함
    if (height <= 0)
    {
        printf("유효한 입력이 아닙니다. 양수 값을 입력하세요.\n");
        return 1;
    }

    // 떨어지는 데 필요한 시간 계산 (s = 0.5 * g * t^2, 여기서 s는 높이, g는 중력 가속도, t는 시간)
    // 시간 t를 구하는 공식: t = sqrt((2 * s) / g)
    time = sqrt((2 * height) / GRAVITY);

    // 결과 출력
    printf("떨어지는 데 %.2lf 초가 걸립니다.\n", time);

    return 0;
}
