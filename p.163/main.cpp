#include <stdio.h>

int main()
{
	int chest = 0;
	char size = 0;

	printf("���� �ѷ��� �Է��ϼ���.");
	scanf_s("%d", &chest);

	if (chest<= 90)
	{
		size = 'S';
	}
	else if (chest > 90 && chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("�Է��� ���� �ѷ��� �ش��ϴ� ������� %c�Դϴ�.", size);

	return 0;
}