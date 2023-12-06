#include <stdio.h>

// ����� ����ϴ� �Լ�
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
        printf("2x2 ����� ��Ҹ� �Է��ϼ���:\n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("�� %d, �� %d: ", i + 1, j + 1);
                scanf_s("%lf", &matrix[i][j]);
            }
        }

        // ������� �����ϴ��� Ȯ�� (determinant�� 0�� �ƴ���)
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

        if (det != 0)
        {
            // ������� �����ϴ� ��� ��� �� ���
            double invMatrix[2][2];
            invMatrix[0][0] = matrix[1][1] / det;
            invMatrix[0][1] = -matrix[0][1] / det;
            invMatrix[1][0] = -matrix[1][0] / det;
            invMatrix[1][1] = matrix[0][0] / det;

            printf("�Է��� ���:\n");
            printMatrix(matrix);
            printf("�����:\n");
            printMatrix(invMatrix);
            break;
        }
        else
        {
            printf("������� �������� �ʽ��ϴ�. �ٽ� �Է��ϼ���.\n");
        }
    }

    return 0;
}
