#include <stdio.h>

int main(void)
{
	int i = 0;
	int number = 0;
	int result = 0;

	for (i = 0; i < 5; i++)
	{
		printf("다섯자리 숫자를 입력하세요.");
		scanf_s("%d", &number);
		result += number;
	}
	if (result % 5 == 3)
	{
		printf("Suspect");
	}
	else
	{
		printf("Citizen");
	}
}