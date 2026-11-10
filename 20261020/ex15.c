#include <stdio.h>
int main() {
    int money = 0,
        sum = 0;
    do{
        printf("請輸入提款金額(輸入0退出):");
        scanf("%d", &money);
        sum = sum + money;
    }while(money != 0);
    printf("提款總金額為: %d\n", sum);
    return 0;
}