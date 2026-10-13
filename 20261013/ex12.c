#include <stdio.h>
int main (){
    int options = 0;

    printf("請選擇飲料: \n"
            "1.紅茶30元  \n"
            "2.綠茶35元  \n"
            "3.奶茶50元  \n"
            "4.果汁45元  \n");

    printf("請輸入選項: ");
    scanf("%d", &options);
    switch (options) {
        case 1:
            printf("紅茶30元\n");
            break;
        case 2:
            printf("綠茶35元\n");
            break;
        case 3:
            printf("奶茶50元\n");
            break;
        case 4:
            printf("果汁45元\n");
            break;
        default:
            printf("無此飲料選項\n");
            break;
    }
    return 0;
}