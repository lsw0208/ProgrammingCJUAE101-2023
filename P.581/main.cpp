#include <stdio.h>

int main(void)
{
    FILE* fp;

    // ������ ���� ���("w")�� ����
    fp = fopen("sample.txt", "w");

    // ������ ����� �������� Ȯ��
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���Ͽ� ���� ����
    fprintf(fp, "�ȳ��ϼ���, �̰��� ���� �����Դϴ�.\n");
    fprintf(fp, "���ο� �ٿ� �߰� ������ ���ϴ�.\n");

    // ���� �ݱ�
    fclose(fp);

    printf("������ ���������� �����Ǿ����ϴ�.\n");

    return 0;
}