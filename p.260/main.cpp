#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];
    int count = 0;
    int i;

    printf("���� �Է� : ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            str[i] += ('a' - 'A');
            count++;
        }
    }

    printf("�ٲ� ���� : ");

    puts(str);

    printf("�ٲ� ���� �� : %d\n", count);

    return 0;
}
