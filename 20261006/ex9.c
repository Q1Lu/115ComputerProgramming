#include <stdio.h>
int main() {
    int score = 0;
    int attendance = 0;

    printf("請輸入成績(分): ");
    scanf("%d", &score);
    if (score >= 60 ) {
        printf("請輸入出席率(%%): ");
        scanf("%d", &attendance);  
        if (attendance >= 80) {
            printf("課程通過\n");
        } else {
            printf("出席率不足，無法通過課程\n");
        }
    } else {
        printf("成績不及格\n");
    }
    return 0;
}