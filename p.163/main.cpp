#include <stdio.h>

int main()
{
	int chest = 0;
	char size = 0;

	printf("가슴 둘레를 입력하세요.");
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

	printf("입력한 가슴 둘레에 해당하는 사이즈는 %c입니다.", size);

	return 0;
}