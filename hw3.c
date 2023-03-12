/*
C語言程式
運用巢狀判斷式, 計算其BMI再依性別判斷其身體質量(檔名存為 hw3.c)
BMI=體重(kg)/身高(m)的平方
BMI標準
男生：10以下(太瘦)、11-21(標準)、22以上(過高)
女生：20以下(太瘦)、21-24(標準)、25以上(過高)


*/

#include <stdio.h>

int main() {
    float height, weight, bmi;
    char gender='m';

    printf("請輸入身高(cm)和體重(kg) 性別(m/f) \n180 72 m \n170 50 f\n");
    scanf("%f %f %c", &height, &weight , &gender);

    // 將身高從公分轉換為米
    height = height / 100 ;

    bmi = weight / (height * height);

    printf("\n您的BMI值為：%.2f\n", bmi);


    if (gender == 'm') {
        if (bmi < 10) {
            printf("您的BMI指數太低，屬於太瘦的類型。\n");
        } else if (bmi >= 10 && bmi <= 21) {
            printf("您的BMI指數正常，屬於標準的類型。\n");
        } else {
            printf("您的BMI指數過高，屬於過重的類型。\n");
        }
    } else if (gender == 'f') {
        if (bmi < 20) {
            printf("您的BMI指數太低，屬於太瘦的類型。\n");
        } else if (bmi >= 20 && bmi <= 24) {
            printf("您的BMI指數正常，屬於標準的類型。\n");
        } else {
            printf("您的BMI指數過高，屬於過重的類型。\n");
        }
    } else {
        printf("您輸入的性別有誤，請重新輸入。\n");
    }

    return 0;
}
