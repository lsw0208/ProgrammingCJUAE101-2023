#include <stdio.h>

int main() {
    int insertedAmount, itemPrice, change;
    int thousandBillCount, fiveHundredCoinCount, hundredCoinCount;

    // ����ڷκ��� �ݾװ� ���ǰ��� �Է¹���
    printf("������ �ݾ��� �Է��ϼ���: ");
    scanf("%d", &insertedAmount);
    printf("���ǰ��� �Է��ϼ���: ");
    scanf("%d", &itemPrice);

    if (insertedAmount < itemPrice) {
        printf("������ �ݾ��� ���ǰ����� �۽��ϴ�. �ٽ� �Է��ϼ���.\n");
        return 1; // ���� �ڵ� ��ȯ
    }

    // �Ž����� ���
    change = insertedAmount - itemPrice;

    // ����� ���� ���� ���
    thousandBillCount = change / 1000;
    change %= 1000;
    fiveHundredCoinCount = change / 500;
    change %= 500;
    hundredCoinCount = change / 100;

    // ��� ���
    printf("�Ž�����: %d��\n", insertedAmount - itemPrice);
    printf("1000�� ���� ����: %d��\n", thousandBillCount);
    printf("500�� ���� ����: %d��\n", fiveHundredCoinCount);
    printf("100�� ���� ����: %d��\n", hundredCoinCount);

    return 0;
}