#include <stdio.h>

int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y;
}

int Mul(int x, int y)
{
    return x * y;
}

int Div(int x, int y)
{
    if (y == 0)
    {
        printf("[����]: 0���� ������ �ȵ�!\n");
        return 0;
    }
    return x / y;
}

int main()
{
    int x, y;

    printf("������ �Է�: ");
    scanf_s("%d %d", &x, &y);

    printf("����: %d + %d = %d\n", x, y, Add(x, y));
    printf("����: %d - %d = %d\n", x, y, Sub(x, y));
    printf("����: %d * %d = %d\n", x, y, Mul(x, y));
    printf("������: %d / %d = %d\n", x, y, Div(x, y));

    return 0;
}