#include <stdio.h>
int main() {
    int login = 0, 
        black = 0,
        balance  = 0, 
        amount = 0;

    printf("請輸入登入狀態(1:登入, 0:未登入): ");
    scanf("%d", &login);
    printf("請輸入帳戶餘額：");
    scanf("%d", &balance);
    printf("請輸入提款金額：");
    scanf("%d", &amount);
    printf("請輸入黑名單狀態(1:是, 0:否): ");
    scanf("%d", &black);

    if (login != 1) {
        printf("無法提款：尚未登入\n");
    } else if (black == 1) {
        printf("無法提款：黑名單會員\n");
    } else if (balance < amount) {
        printf("無法提款：餘額不足\n");
    } else {
        printf("可以提款\n");
    }   
    return 0;
}