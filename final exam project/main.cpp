#include <stdio.h>
#include <string.h>

struct Player
{
    char name[50];
    double era;
    int wins;
};

// 선수 정보를 출력하는 함수
void print_list(struct Player list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("이름: %s, 평균 자책점: %.2lf, 승리 갯수: %d\n", list[i].name, list[i].era, list[i].wins);
    }
}

// 평균자책점(`era`)을 기준으로 내림차순 정렬하는 함수
void sort_by_era(struct Player list[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (list[i].era < list[j].era)
            {
                // 두 선수의 정보를 스왑
                struct Player temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

int main()
{
    struct Player list[5] =
    {
        {"페디", 2.00, 20},
        {"안우진", 2.39, 9},
        {"뷰캐넌", 2.54, 12},
        {"후라도", 2.65, 11},
        {"알칸타라", 2.67, 13}
    };

    int size = sizeof(list) / sizeof(list[0]); // 배열 크기 계산

    // 배열과 포인터 배열 선언
    struct Player a[5];
    struct Player* p[5];

    // 배열 a를 초기화
    for (int i = 0; i < size; i++)
    {
        a[i] = list[i];
    }

    // 포인터 배열 p를 초기화
    for (int i = 0; i < size; i++)
    {
        p[i] = &list[i];
    }

    // 평균자책점을 기준으로 내림차순 정렬
    sort_by_era(a, size);

    // 정렬된 선수 정보 출력
    print_list(a, size);

    return 0;
}