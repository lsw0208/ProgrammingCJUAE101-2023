#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int nArrTest[6] = { 1,2,3 };
	int* pArrTest = nArrTest;

	for (unsigned int i = 0;i < 6;i++)
	{
		printf("nArrTest[%d]=%d\n", i, nArrTest[i]);
		//printf("nArrTest[%d] = %d\n", i, *(nArrTest+i));
		//printf("nArrTest[%d] = %d\n", i, pArrTest[i]);
		//printf("nArrTest[%d] = %d\n", i, *(pArrTest+i));
	}

	return 0;
}