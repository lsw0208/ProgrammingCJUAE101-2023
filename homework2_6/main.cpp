#include <stdio.h>

// 마름모를 출력하는 함수
void printDiamond(int size)
{
    if (size % 2 == 0)
    {
        printf("마름모는 홀수 크기로 입력해야 합니다.\n");
        return;
    }

    int space = size / 2;
    int stars = 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }

        printf("\n");

        if (i < size / 2) {
            space--;
            stars += 2;
        }
        else {
            space++;
            stars -= 2;
        }
    }
}

// 정삼각형을 출력하는 함수
void printTriangle(int size)
{
    if (size < 2)
    {
        printf("정삼각형은 크기가 2 이상이어야 합니다.\n");
        return;
    }

    for (int i = 1; i <= size; i++)
    {
        // 공백 출력
        for (int j = 0; j < size - i; j++)
        {
            printf(" ");
        }

        // 별표 출력
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int choice, size;

    printf("도형을 선택하세요 (1: 마름모, 2: 정삼각형): ");
    scanf_s("%d", &choice);

    printf("크기를 입력하세요: ");
    scanf_s("%d", &size);

    if (choice == 1)
    {
        printDiamond(size);
    }
    else if (choice == 2)
    {
        printTriangle(size);
    }
    else {
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}
