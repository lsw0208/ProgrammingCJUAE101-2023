#include <stdio.h>

int main(void)
{
    FILE* fp;

    // 파일을 쓰기 모드("w")로 열기
    fp = fopen("sample.txt", "w");

    // 파일이 제대로 열리는지 확인
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일에 내용 쓰기
    fprintf(fp, "안녕하세요, 이것은 샘플 파일입니다.\n");
    fprintf(fp, "새로운 줄에 추가 내용을 씁니다.\n");

    // 파일 닫기
    fclose(fp);

    printf("파일이 성공적으로 생성되었습니다.\n");

    return 0;
}