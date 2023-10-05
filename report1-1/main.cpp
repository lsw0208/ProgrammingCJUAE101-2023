#include <stdio.h>

int main() {
    float angle360, angle180;

    // 사용자로부터 0 ~ 360[deg.] 범위의 각도 입력 받음
    printf("각도 입력 (0 ~ 360[deg.]): ");
    scanf_s("%f", &angle360);

    // 0 ~ 360[deg.] 범위를 -180 ~ +180[deg.] 범위로 변환
    angle180 = angle360;
    if (angle180 >= 180.0) {
        angle180 -= 360.0;
    }

    // 결과 출력
    printf("-180 ~ +180[deg.] 범위로 변환된 각도: %.2f[deg.]\n", angle180);

    return 0;
}