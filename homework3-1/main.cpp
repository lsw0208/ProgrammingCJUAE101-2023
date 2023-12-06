#include <stdio.h>

// �迭�� ������������ �����ϴ� �Լ�
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

// �迭�� ������������ �����ϴ� �Լ�
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

    // ������������ ����
    ascendingSort(nRawArr, n);
    printf("Ascending Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nRawArr[i]);
    }
    printf("\n\n");

    // ������������ ����
    descendingSort(nRawArr, n);
    printf("Descending Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nRawArr[i]);
    }
    printf("\n");

    return 0;
}
