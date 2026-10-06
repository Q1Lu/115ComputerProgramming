#include <stdio.h>
int main() {
    int hight = 0;

    printf("請輸入身高(公分): ");
    scanf("%d", &hight);
    if (hight >= 120 ) {
        printf("可以搭乘雲霄飛車。\n");
    }else {
        printf("身高不足，無法搭乘雲霄飛車。\n");
    }
    return 0;
}