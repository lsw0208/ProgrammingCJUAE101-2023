#include <stdio.h>

int main() {
    float angle360, angle180;

    // ����ڷκ��� 0 ~ 360[deg.] ������ ���� �Է� ����
    printf("���� �Է� (0 ~ 360[deg.]): ");
    scanf_s("%f", &angle360);

    // 0 ~ 360[deg.] ������ -180 ~ +180[deg.] ������ ��ȯ
    angle180 = angle360;
    if (angle180 >= 180.0) {
        angle180 -= 360.0;
    }

    // ��� ���
    printf("-180 ~ +180[deg.] ������ ��ȯ�� ����: %.2f[deg.]\n", angle180);

    return 0;
}