#include <stdio.h>

int main(void)
{
	int i = 0;
	int number = 0;
	int result = 0;

	for (i = 0; i < 5; i++)
	{
		printf("�ټ��ڸ� ���ڸ� �Է��ϼ���.");
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