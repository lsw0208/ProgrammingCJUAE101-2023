#include <stdio.h>

int main(void)
{
	int num[5][6] =
	{
		{ 1, 2, 3, 4, 5, 0 },
		{ 6, 7, 8, 9, 10, 0 },
		{ 11, 12, 13, 14, 15, 0 },
		{ 16, 17, 18, 19, 20, 0 },
		{ 0, 0, 0, 0, 0, 0 }
	};

	int i, j;


	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			num[i][5] += num[i][j];
			num[4][j] += num[i][j];
			num[4][5] += num[i][j];
		}
	}


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}

	return 0;
}
