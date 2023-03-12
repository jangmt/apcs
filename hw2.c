/*
(2)輸入兩整數的四則運算式 (a+b, a-b, a*b, a/b, a%b)，印出其計算結果。(hw2.c)

*/

#include <stdio.h>

int main() {
    int a, b;
    int add, sub, mul, div, mod;

    printf("請輸入兩個整數: \nex:\n120 50\n");
    scanf("%d%d", &a, &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %d\n", a, b, div);
    printf("%d %% %d = %d\n", a, b, mod);

    return 0;
}
