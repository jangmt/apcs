/*
(1)請用C語言寫一個程式, 輸入三個整數 a、b、c，印出此三數的最大值、最小值、總和及平均值。(hw1.c)
*/

#include <stdio.h>

int main() {
    int a, b, c;
    int max, min, sum;
    float average;

    printf("請輸入三個整數: ");
    scanf("%d%d%d", &a, &b, &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    sum = a + b + c;
    average = (float) sum / 3;

    printf("最大值為: %d\n", max);
    printf("最小值為: %d\n", min);
    printf("總和為: %d\n", sum);
    printf("平均值為: %.2f\n", average);

    return 0;
}
