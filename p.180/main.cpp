#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int num3 = 0;
	int res = 0;
	char oper;

	printf("사칙연산 입력(정수) :");
	scanf("%d %c %d", &num1, &oper, &num3);

	switch (oper)
	{
	case '+':
		res = num1 + num3;
		break;
	case '-':
		res = num1 - num3;
		break;
	case '*':
		res = num1 * num3;
		break;
	case '/':
		res = num1 / num3;
		break;
	}

	printf("%d %c %d = %d\n", num1, oper, num3, res);

	return 0;
}