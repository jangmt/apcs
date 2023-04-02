/*
可以用 C 語言寫一個簡單的抽卡程式 , 字母 A-Z 為被抽卡的所有卡片, 使用者選擇抽幾張卡排, 程式自動從 26 個字母中抽出

write by GPTCHAT user mtchang , 2023/03/15

這個程式使用了 srand() 函數設置亂數種子，以保證每次執行時都能得到不同的隨機數序列。
接著使用 rand() 函數生成一個介於 0 到 25 之間的隨機數，並根據這個數字選取對應的字母作為抽到的卡牌。
使用者需要輸入要抽幾張卡牌，程式會根據使用者的輸入生成相應數量的卡牌。
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int draw;
    srand(time(NULL)); // 設置亂數種子為當前時間

    printf("請輸入要抽幾張卡牌：\n");
    scanf("%d", &draw);

    printf("抽到的卡牌為：");
    for (int i = 0; i < draw; i++) {
        char card = 'A' + rand() % 26; // 隨機生成 A 到 Z 中的一個字母
        printf("%c ", card);
    }
    printf("\n");

    return 0;
}

