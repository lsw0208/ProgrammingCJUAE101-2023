#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];
    int count = 0;
    int i;

    printf("문장 입력 : ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            str[i] += ('a' - 'A');
            count++;
        }
    }

    printf("바뀐 문장 : ");

    puts(str);

    printf("바뀐 문자 수 : %d\n", count);

    return 0;
}
