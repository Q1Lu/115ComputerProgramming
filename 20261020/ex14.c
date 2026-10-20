#include <stdio.h>

int main() {
    int code = 0;

    printf("請輸入密碼 (輸入-1退出):");
    scanf("%d", &code);
    while (code != -1) {
        if (code == 1234) {
            printf("密碼正確!\n");
            break;
        } else {
            printf("密碼錯誤!請重新輸入密碼(輸入-1退出):");
            scanf("%d", &code);
        }
    }
    printf("已經退出程式\n");
    return 0;
}