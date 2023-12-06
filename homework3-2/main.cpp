#include <stdio.h>

// 행렬을 출력하는 함수
void printMatrix(double matrix[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    double matrix[2][2];
    double det;

    while (1)
    {
        printf("2x2 행렬의 요소를 입력하세요:\n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("행 %d, 열 %d: ", i + 1, j + 1);
                scanf_s("%lf", &matrix[i][j]);
            }
        }

        // 역행렬이 존재하는지 확인 (determinant가 0이 아닌지)
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

        if (det != 0)
        {
            // 역행렬이 존재하는 경우 계산 및 출력
            double invMatrix[2][2];
            invMatrix[0][0] = matrix[1][1] / det;
            invMatrix[0][1] = -matrix[0][1] / det;
            invMatrix[1][0] = -matrix[1][0] / det;
            invMatrix[1][1] = matrix[0][0] / det;

            printf("입력한 행렬:\n");
            printMatrix(matrix);
            printf("역행렬:\n");
            printMatrix(invMatrix);
            break;
        }
        else
        {
            printf("역행렬이 존재하지 않습니다. 다시 입력하세요.\n");
        }
    }

    return 0;
}
