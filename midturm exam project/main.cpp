#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // ���� �߻��� ���� �ʱ�ȭ

    const int codeLength = 3; // ������ ������ ����
    int secretCode[codeLength]; // ������ ���ڸ� ������ �迭

    // ���� �ٸ� ������ �̷���� ������ ���� ����
    for (int i = 0; i < codeLength; i++)
    {
        int digit;
        do
        {
            digit = rand() % 10; // 0���� 9������ ���� ����
        } while (digit == 0 || secretCode[0] == digit || secretCode[1] == digit); // ���� �ٸ� ���ڸ� ���
        secretCode[i] = digit;
    }

    printf("���ھ߱� ������ �����մϴ�. %d�ڸ� ���ڸ� ���纸����.\n", codeLength);

    int guess[codeLength]; // ����ڰ� ������ ���ڸ� ������ �迭

    // ���� ����
    int attempts = 0; // �õ� Ƚ�� �ʱ�ȭ
    while (1)
    {
        printf("���ڸ� �Է��ϼ���: ");

        // ������� �Է��� ����
        for (int i = 0; i < codeLength; i++)
        {
            scanf_s("%d", &guess[i]);
        }

        // �õ� Ƚ�� ����
        attempts++;

        // ���� Ȯ��
        int correctDigits = 0;
        int correctPositions = 0;

        for (int i = 0; i < codeLength; i++)
        {
            if (guess[i] == secretCode[i])
            {
                correctPositions++;
            }

            for (int j = 0; j < codeLength; j++)
            {
                if (i != j && guess[i] == secretCode[j])
                {
                    correctDigits++;
                }
            }
        }

        // ���� ���� ���� Ȯ��
        if (correctPositions == codeLength)
        {
            printf("�����մϴ�! ������ ���߼̽��ϴ�.\n");
            printf("�õ� Ƚ��: %dȸ\n", attempts);
            break;
        }
        else
        {
            printf("���� �� %d��Ʈ����ũ %d���Դϴ�.\n", correctPositions, correctDigits);
        }
    }

    return 0;
}
