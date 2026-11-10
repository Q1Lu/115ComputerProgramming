#include <stdio.h>
int main(){
        int floor = 0;
        printf("請輸入魔法金字塔層數:");
        scanf("%d",&floor);
        for(int i = floor; i > 0; i--){
            printf("解鎖第 %d 層魔法能量 \n",i);
        }
        printf("所有樓層解鎖完成!");
        return 0;
}