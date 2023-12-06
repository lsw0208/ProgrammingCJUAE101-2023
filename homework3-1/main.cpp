#include <stdio.h>

// 배열을 오름차순으로 정렬하는 함수
void ascendingSort(int arr[], int n)
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// 배열을 내림차순으로 정렬하는 함수
void descendingSort(int arr[], int n)
{
    int i, j, maxIndex, temp;
    for (i = 0; i < n - 1; i++)
    {
        maxIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main(void)
{
    int nRawArr[] = { 232, 244, 878, 817, 754, 351, 481, 137, 115, 253, 986, 236 };
    int n = sizeof(nRawArr) / sizeof(nRawArr[0]);

    printf("Original Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nRawArr[i]);
    }
    printf("\n\n");

    // 오름차순으로 정렬
    ascendingSort(nRawArr, n);
    printf("Ascending Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nRawArr[i]);
    }
    printf("\n\n");

    // 내림차순으로 정렬
    descendingSort(nRawArr, n);
    printf("Descending Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nRawArr[i]);
    }
    printf("\n");

    return 0;
}
