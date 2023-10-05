#include <stdio.h>

int main() {
    int insertedAmount, itemPrice, change;
    int thousandBillCount, fiveHundredCoinCount, hundredCoinCount;

    // 사용자로부터 금액과 물건값을 입력받음
    printf("투입한 금액을 입력하세요: ");
    scanf("%d", &insertedAmount);
    printf("물건값을 입력하세요: ");
    scanf("%d", &itemPrice);

    if (insertedAmount < itemPrice) {
        printf("투입한 금액이 물건값보다 작습니다. 다시 입력하세요.\n");
        return 1; // 오류 코드 반환
    }

    // 거스름돈 계산
    change = insertedAmount - itemPrice;

    // 지폐와 동전 개수 계산
    thousandBillCount = change / 1000;
    change %= 1000;
    fiveHundredCoinCount = change / 500;
    change %= 500;
    hundredCoinCount = change / 100;

    // 결과 출력
    printf("거스름돈: %d원\n", insertedAmount - itemPrice);
    printf("1000원 지폐 개수: %d개\n", thousandBillCount);
    printf("500원 동전 개수: %d개\n", fiveHundredCoinCount);
    printf("100원 동전 개수: %d개\n", hundredCoinCount);

    return 0;
}