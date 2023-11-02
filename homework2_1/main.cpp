#include <stdio.h>

// 최대공약수(GCD) 계산 함수
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b; // a를 b로 나눈 나머지를 새로운 b로 설정
        a = temp;  // 이전의 b값을 a에 저장
    }
    return a; // 반복문이 종료되면 a에 최대공약수가 저장되어 반환
}

// 최소공배수(LCM) 계산 함수
int findLCM(int a, int b)
{
    int gcd = findGCD(a, b); // 먼저 최대공약수를 계산
    int lcm = (a * b) / gcd; // 최소공배수는 두 수의 곱을 최대공약수로 나눈 값
    return lcm; // 최소공배수 반환
}

int main()
{
    int num1, num2;

    printf("두 개의 정수를 입력하세요: ");
    scanf_s("%d %d", &num1, &num2);

    int gcd = findGCD(num1, num2); // 최대공약수 계산
    int lcm = findLCM(num1, num2); // 최소공배수 계산

    printf("입력한 두 정수의 최대공약수(GCD)는 %d입니다.\n", gcd);
    printf("입력한 두 정수의 최소공배수(LCM)는 %d입니다.\n", lcm);

    return 0;
}