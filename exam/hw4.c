/*
利用 switch 敘述，將輸入的成績 (分數) 以下列方式分級。(hw4.c)
90~100: A 級
80~89: B 級
70~79: C 級
60~69: D 級
0~59: E 級
*/

#include <stdio.h>

int main() {
    int score;

    printf("請輸入成績: ");
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
        case 9:
            printf("成績為 A 級\n");
            break;
        case 8:
            printf("成績為 B 級\n");
            break;
        case 7:
            printf("成績為 C 級\n");
            break;
        case 6:
            printf("成績為 D 級\n");
            break;
        default:
            printf("成績為 E 級\n");
    }

    return 0;
}
