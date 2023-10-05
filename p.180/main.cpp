#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, res = 0;
	char op;

	printf("사칙연산 입력(정수) :");
	scanf_s(" % d % c % d", &num1, &op, &num2);

	if(op == '+')

	printf(" % d % c % d = %d/n", num1, op, num2, res);

	return 0;
}