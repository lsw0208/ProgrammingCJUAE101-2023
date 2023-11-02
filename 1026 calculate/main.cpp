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
        printf("[¿À·ù]: 0À¸·Î ³ª´©¸é ¾ÈµÊ!\n");
        return 0;
    }
    return x / y;
}

int main()
{
    int x, y;

    printf("Á¤¼ý°ª ÀÔ·Â: ");
    scanf_s("%d %d", &x, &y);

    printf("µ¡¼À: %d + %d = %d\n", x, y, Add(x, y));
    printf("»¬¼À: %d - %d = %d\n", x, y, Sub(x, y));
    printf("°ö¼À: %d * %d = %d\n", x, y, Mul(x, y));
    printf("³ª´°¼À: %d / %d = %d\n", x, y, Div(x, y));

    return 0;
}